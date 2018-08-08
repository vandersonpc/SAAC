function [newbusdata,erro,niter] = newtonraph(Ybus,Busnames,Busdata);

%
%    FUNCAO: NEWTONRAPH.m - Faz analise de fluxo de potencias atraves 
%                           do metodo de Newton-Raphson
%
% Variaveis de entrada:
%
%   Ybus    - Matriz admitencia de sequencia positiva.
%  
%   Busdata - Matriz de dados dos barramentos
%
% Veriaveis de saida
%
%   newbusdata  - Matriz com os novos dados do barramento
%
%   erro        - Tolerancia maxima para os calculos
%
%   niter       - Numero de iteracoes necessarias para os calculos
%
%       VERSÃO: 1.70 - 21/out/2006                                      
%                                                       
% 
%  ESTE PROGRAMA E PARTE DO:
%
%  SACC - SISTEMA DE CALCULO DE CURTO CIRCUITO EM SISTEMA DE POTENCIA
%
%  POR:                                                                   
%                   Vanderson Pimenta Carvalho 
%                   Rogerio Fernandes de Sales  
%                   Julio Cesar Silva de Oliveira         


% Estrutura dos barramentos

Bus.number = []; % No do barramento
Bus.names  = [];  
Bus.type   = []; % Tipo de Barramento
Bus.Pg     = [];
Bus.Pc     = [];
Bus.Qg     = [];
Bus.Qc     = [];
Bus.Vmag   = [];
Bus.Vdeg   = []; 
Bus.Vbase  = []; % Tensao base do barramento

%Bus.fault  = [];

error = 10e-6;  % Erro maximo admissivel
iter      = 0;  % Contador do numero de iteracoes
max_iter  = 30; % Numero maximo de iteracoes
isconv    = 0;  % Flag de convergencia

G = real(Ybus); %Condutancia
B = imag(Ybus); %Susceptancia

[nbus,bcol] = size(Busdata);

Pesp  = zeros(nbus,1); % Potencia ativa especificada
Qesp  = zeros(nbus,1); % Potencia reativa especificada


%for x=1:nbus,
    Bus.names  = Busnames(1,:);
    Bus.number = Busdata(:,1)'; % No do barramento
    Bus.type   = Busdata(:,2)'; % Tipo de Barramento
    Bus.Pg     = Busdata(:,3)';
    Bus.Qg     = Busdata(:,4)';
    Bus.Pc     = Busdata(:,5)';
    Bus.Qc     = Busdata(:,6)';
    Bus.Vmag   = Busdata(:,7)';
    Bus.Vdeg   = Busdata(:,8)' .* pi/180 ; % Angulo da tensao convertidos em raianos 
    Bus.Vbase  = Busdata(:,9)'; % Tensao base do barramento
    Pesp       = Bus.Pg - Bus.Pc; 
    Qesp       = Bus.Qg - Bus.Qc; 
    
    %end;    
    
swbusidx  = find(Bus.type==1)'; % Obtem o indice da barra swing.
gerbusidx = find(Bus.type==2)'; % Obtem o indice da barra geracao.
lbusidx   = find(Bus.type==3)'; % Obtem o indice da barra carga.

ngb       = length(gerbusidx);
nlb       = length(lbusidx); 

%% Definicao das condicoes iniciais 
%% 
for x=1:nbus,   
   if Bus.type(x) == 2 % Barra de Geracao
      Bus.Vdeg(x) = 0;
      
   end   
  
   if Bus.type(x) == 3 % Barra de Carga
      Bus.Vmag(x) = 1; 
      Bus.Vdeg(x) = 0; 
    end
 
end    
%% Fim =======

while (~isconv & iter < max_iter)

Pcalc = zeros(nbus,1); % Potencia ativa calculada
Qcalc = zeros(nbus,1); % Potencia reativa calculada
DP    = zeros(nbus,1); % Mismatches de potencia ativa
DQ    = zeros(nbus,1); % Mismatches de potencia reativa
    
% Calcula as potencia nas barras de geracao

for x=1:length(gerbusidx),
    i = gerbusidx(1,x);
    for j=1:nbus,
        Dab = Bus.Vdeg(i) - Bus.Vdeg(j);
        Pcalc(i) = Pcalc(i) + (Bus.Vmag(j) * ( G(i,j) * cos(Dab) + B(i,j) * sin(Dab)) );
        Qcalc(i) = Qcalc(i) + (Bus.Vmag(j) * ( G(i,j) * sin(Dab) - B(i,j) * cos(Dab)) );
    end;
    Pcalc(i) = Bus.Vmag(i) * Pcalc(i);
    Qcalc(i) = Bus.Vmag(i) * Qcalc(i);
    DP(i) = Pesp(i) - Pcalc(i); % Calcula mismatche de potencia ativa 
    DQ(i) = Qesp(i) - Qcalc(i); % Calcula mismatche de potencia reativa      
end;       

% Calcula as potencia nas barras de carga

for x=1:length(lbusidx),
    i = lbusidx(x,1);
    for j=1:nbus,
        Dab = Bus.Vdeg(i) - Bus.Vdeg(j);
        Pcalc(i) = Pcalc(i) + (Bus.Vmag(j) * ( G(i,j) * cos(Dab) + B(i,j) * sin(Dab)) );
        Qcalc(i) = Qcalc(i) + (Bus.Vmag(j) * ( G(i,j) * sin(Dab) - B(i,j) * cos(Dab)) );
    end;
    Pcalc(i) = Bus.Vmag(i) * Pcalc(i);
    Qcalc(i) = Bus.Vmag(i) * Qcalc(i);
    DP(i) = Pesp(i) - Pcalc(i); % Calcula mismatche de potencia ativa 
    DQ(i) = Qesp(i) - Qcalc(i); % Calcula mismatche de potencia reativa      
end;      

%% Incia calculo mtriz jacobiana


iter = iter + 1; % contador de iteracoes
    
jota = sqrt(-1);

V = Bus.Vmag';
n = length(V);

Ibus = Ybus * V;
Sbus = DP + jota * DQ;

F    = [real(Sbus([gerbusidx;lbusidx])); imag(Sbus(lbusidx))];

normF = norm(F,inf);
if normF < error
   isconv = 1;   
   if ~isconv
      fprintf(1,'\nO metodo nao convergiu em %2d iteracoes. \n\n',iter);
   else
      fprintf(1,'\nO metodo convergiu em %2d iteracoes. \n\n',iter);
   end;
   niter = iter;
   erro  = error;
   Bus.Vdeg(gerbusidx) = Bus.Vdeg(gerbusidx) .* 180/pi;
   Bus.Vdeg(lbusidx) = Bus.Vdeg(lbusidx) .* 180/pi;
   break;
end   

if issparse(Ybus)
   diagV     = spdiags(V,0,n,n); 
   diagIbus  = spdiags(Ibus,0,n,n);
   diagVnorm = spdiags(V./abs(V),0,n,n); 
else
   diagV     = diag(V);
   diagIbus  = diag(Ibus);
   diagVnorm = diag(V./abs(V));
end;

dSbus_dVm = diagV * conj(Ybus * diagVnorm) + conj(diagIbus) * diagVnorm;
dSbus_dVa = jota * diagV * conj(diagIbus - Ybus * diagV);

H = - real(dSbus_dVa([gerbusidx;lbusidx],[gerbusidx;lbusidx])); 
N = - real(dSbus_dVm([gerbusidx;lbusidx],lbusidx)); 
J = - imag(dSbus_dVa(lbusidx,[gerbusidx,lbusidx']));
L = - imag(dSbus_dVm(lbusidx,lbusidx));

Jac = [H N;J L;];
dx  = -inv(Jac) * F;

if ~isempty(gerbusidx)
    Bus.Vdeg(gerbusidx) = Bus.Vdeg(gerbusidx) + dx(1:ngb);
 end
    VTemp(lbusidx) = dx(ngb + 1 : ngb + nlb);
    Bus.Vdeg(lbusidx) = Bus.Vdeg(lbusidx) + VTemp(lbusidx);
    VTemp(lbusidx) = dx(ngb + nlb + 1:ngb + 2*nlb);
    Bus.Vmag(lbusidx') = Bus.Vmag(lbusidx') + VTemp(lbusidx);
end 

newbusdata = Bus;
return;