function sacc(finput,fout, Zf, metodo, Vibus)

%
%
%    PROGRAMA: SACC.m - Calcula curto circuitos equilibrados,
%                       desequilibrados e faz analise de fluxo 
%                       de potencia em sistemas de potencia.
%
%
%       VERSÃO: 2.3 - 15/dez/2006                                      
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


%-----------------------------------------------------------------------------
% Limpa a area de trabalho e todas as variaveis 
%-----------------------------------------------------------------------------

clc
Zf     = str2num(Zf);
metodo = str2num(metodo);
Vibus  = str2num(Vibus);    

%-----------------------------------------------------------------------------
% Tela principal e controle de versao
%-----------------------------------------------------------------------------

version = '2.3/2006';

fprintf(1,'SACC RUN-TIME SOFTWARE VERSION %s\n\n',version); 

fprintf(1,'-INICIANDO ANALISE....\n');

% Inicializa variáveis

sbase  = 0;
stitle = '';
fbus   = 0;
erro   = 0;
niter  = 0;
%-----------------------------------------------------------------------------
% Estrutura de informacoes basicas do sistema
%-----------------------------------------------------------------------------

PS.title   = [] ; % Título do sistema de potência
PS.Sbase   = [] ; % Potëncia base do sistema de potência

%-----------------------------------------------------------------------------
% Estrutura de informacoes dos geradores
%-----------------------------------------------------------------------------

Gen.number = []; % No do gerador
Gen.type   = []; % Tipo do gerador: 0 - Delta; 
                 %                  1 - Estrela;
                 %                  2 - Estrela Aterrado;

Gen.bus    = []; % Barra onde esta conectado o gerador
Gen.Vnom   = []; % Tensão nominal do gerador
Gen.Snom   = []; % Potência nominal do gerador
Gen.Rpos   = []; % Resistência de seq. positiva do gerador
Gen.Xpos   = []; % Reatância de seq. positiva do gerador
Gen.Rneg   = []; % Resistência de seq. negativa do gerador
Gen.Xneg   = []; % Reatância de seq.  negativa do gerador
Gen.Rzero  = []; % Resistência de seq. zero do gerador
Gen.Xzero  = []; % Reatância de seq. zero do gerador
Gen.Zn     = []; % Impedância de neutro do gerador
%-----------------------------------------------------------------------------
% Estrutura de informacoes das cargas
%-----------------------------------------------------------------------------

LD.number  = []; % No da carga
LD.type    = []; % Tipo da carga:   0 - Delta; 
                 %                  1 - Estrela;
                 %                  2 - Estrela Aterrado;

LD.bus     = []; % Barra onde esta conectado a carga
LD.Vnom    = []; % Tensão nominal da carga
LD.Snom    = []; % Potência nominal da carga
LD.Rpos    = []; % Resistência de seq. positiva da carga
LD.Xpos    = []; % Reatância de seq. positiva da carga
LD.Rneg    = []; % Resistência de seq. negativa da carga
LD.Xneg    = []; % Reatância de seq. negativa da carga
LD.Rzero   = []; % Resistência de seq. zero da carga
LD.Xzero   = []; % Reatância de seq. zero da carga
LD.Zn      = []; % Impedância de neutro da carga

%-----------------------------------------------------------------------------
% Estrutura de informacoes dos transformadores
%-----------------------------------------------------------------------------

Tf.number  = []; % No do trafo
Tf.type    = []; % Tipo do Trafo:   0 - Delta/Delta; 
                 %                  1 - Delta/Estrela;
                 %                  2 - Delta/Estrela Aterrado;
                 %                  3 - Estrela/Estrela;
                 %                  4 - Estrela/Estrela Aterrado;
                 %                  5 - Estrela Aterrado/Estrela Aterrado;

Tf.Pbus    = []; % Barra do primário do trafo
Tf.Sbus    = []; % Barra do secundário do trafo
Tf.Snom    = []; % Potência nominal do trafo
Tf.Pvolts  = []; % Tensão nominal do primário
Tf.Svolts  = []; % Tensão nominal do secundário
Tf.Rpos    = []; % Resistência de seq. positiva do trafo
Tf.Xpos    = []; % Reatância de seq. positiva do trafo
Tf.Rneg    = []; % Resistência de seq. negativa do trafo
Tf.Xneg    = []; % Reatância de seq. negativa do trafo

Tf.Rzero   = []; % Resistência de seq. zero do trafo
Tf.Xzero   = []; % Reatância de seq. zero do trafo

%-----------------------------------------------------------------------------
% Estrutura de informacoes das linhas de transmissao
%-----------------------------------------------------------------------------

LT.number  = []; % No da LT
LT.frombus = []; % Barra inicial da L.T.
LT.tobus   = []; % Barra final da L.T.
LT.Rpos    = []; % Resistência de seq. positiva/negativa da L.T.
LT.Xpos    = []; % Reatância de seq. positiva/negativa da L.T.
LT.Rneg    = []; % Resistência de seq. negativa da L.T.
LT.Xneg    = []; % Reatância de seq. negativa da L.T.
LT.Rzero   = []; % Resistência de seq. zero da L.T.
LT.Xzero   = []; % Reatância de seq. zero da L.T.
LT.Ysh     = []; % Y shunt total da L.T.
LT.type    = []; % Tipo do Trafo:   0 - Delta/Delta; 

%-----------------------------------------------------------------------------
% Inicializa variaveis
%-----------------------------------------------------------------------------


ngen = 0;
ntf  = 0;
nlt  = 0;
nld  = 0;

%-----------------------------------------------------------------------------
% Matriz de transformacao
%-----------------------------------------------------------------------------

jota = sqrt(-1);

a    = -0.5 + jota * 0.866; 
a2   = -0.5 - jota * 0.866; 

T = [1 1 1 ; 1 a2 a ; 1 a a2];

%-----------------------------------------------------------------------------
% Entrada de dados do usuario
%-----------------------------------------------------------------------------
%
fprintf(1,'-CRIANDO ESTRUTURAS DO SISTEMA....OK\n');

%
% Timer inicial
%

t0 = clock;


%-----------------------------------------------------------------------------
% Le arquivo de entrada   
%-----------------------------------------------------------------------------

[name,sbase,busnames,busdata,sysdata] = sysload(finput);

%-----------------------------------------------------------------------------
% Verifica numero total de barramentos  
%-----------------------------------------------------------------------------

temp  = max(sysdata(:,1));
temp1 = max(sysdata(:,2));
nbus  = max(temp,temp1);  

%-----------------------------------------------------------------------------
% Le o nome e potencia base do sistema
%-----------------------------------------------------------------------------

PS.title = name; 
PS.Sbase = sbase;

fprintf(1,'-LENDO ARQUIVO DE DADOS....OK\n');

%-----------------------------------------------------------------------------
% Adiciona as informacoes de todos os geradores do sistema
%-----------------------------------------------------------------------------

genidx = find(sysdata(:,3)==0);

Gen.number   = 1:length(genidx);
Gen.type     = sysdata(genidx,4)';
Gen.bus      = sysdata(genidx,1)';
Gen.Vnom     = sysdata(genidx,5)';
Gen.Snom     = sysdata(genidx,7)';
Gen.Rpos     = sysdata(genidx,8)';
Gen.Xpos     = sysdata(genidx,9)';
Gen.Rneg     = sysdata(genidx,10)';
Gen.Xneg     = sysdata(genidx,11)';
Gen.Rzero    = sysdata(genidx,12)';
Gen.Xzero    = sysdata(genidx,13)';
Gen.Zn       = sysdata(genidx,14)';

%
% Mudanca de base
%
sg = find(Gen.Snom~=PS.Sbase);
if ~isempty(sg)  
  if Gen.Snom(sg) ~= PS.Sbase
     Gen.Xpos(sg)  = Gen.Xpos(sg)  .* (PS.Sbase./Gen.Snom(sg));
     Gen.Xneg(sg)  = Gen.Xneg(sg)  .* (PS.Sbase./Gen.Snom(sg));
     Gen.Xzero(sg) = Gen.Xzero(sg) .* (PS.Sbase./Gen.Snom(sg));
    fprintf(1,'\nAviso: A reatancia do gerador %d foi alterada, pois Sgerador <> Sbase\n',Gen.number(sg)); 
  end 
end   

%-----------------------------------------------------------------------------
% Adiciona as informacoes de todos os trafos do sistema
%-----------------------------------------------------------------------------

trafoidx = find(sysdata(:,3)==1);

Tf.number = 1:length(trafoidx);
Tf.type   = sysdata(trafoidx,4)';
Tf.Pbus   = sysdata(trafoidx,1)';
Tf.Sbus   = sysdata(trafoidx,2)';
Tf.Pvolts = sysdata(trafoidx,5)';
Tf.Svolts = sysdata(trafoidx,6)';
Tf.Snom   = sysdata(trafoidx,7)';
Tf.Rpos   = sysdata(trafoidx,8)';
Tf.Xpos   = sysdata(trafoidx,9)';
Tf.Rneg   = sysdata(trafoidx,10)';
Tf.Xneg   = sysdata(trafoidx,11)';
Tf.Rzero  = sysdata(trafoidx,12)';
Tf.Xzero  = sysdata(trafoidx,13)';
Tf.Tap    = sysdata(trafoidx,16)';
%
% Mudanca de base
% 
st = find(Tf.Snom~=PS.Sbase);
if ~isempty(st)
  if Tf.Snom(st) ~= PS.Sbase
     Tf.Xpos(st)  = Tf.Xpos(st)  .* (PS.Sbase./Tf.Snom(st));
     Tf.Xneg(st)  = Tf.Xneg(st)  .* (PS.Sbase./Tf.Snom(st));
     Tf.Xzero(st) = Tf.Xzero(st) .* (PS.Sbase./Tf.Snom(st));
     fprintf(1,'\nAviso: A reatancia do transformador %d foi alterada, pois Strafo <> Sbase\n',Tf.number(st)); 
  end   
end

%-----------------------------------------------------------------------------
% Adiciona as informacoes de todas as linhas de transmissao do sistema
%-----------------------------------------------------------------------------

ltidx = find(sysdata(:,3)==2);

LT.number  = 1:length(ltidx);
LT.frombus = sysdata(ltidx,1)';
LT.tobus   = sysdata(ltidx,2)';
LT.Rpos    = sysdata(ltidx,8)';
LT.Xpos    = sysdata(ltidx,9)';
LT.Rneg    = sysdata(ltidx,10)';
LT.Xneg    = sysdata(ltidx,11)';
LT.Rzero   = sysdata(ltidx,12)';
LT.Xzero   = sysdata(ltidx,13)';
LT.Ysh     = sysdata(ltidx,15)';
LT.type    = sysdata(ltidx,4)';

%-----------------------------------------------------------------------------
% Adiciona as informacoes de todas as cargas do sistema
%-----------------------------------------------------------------------------

ldidx = find(sysdata(:,3)==3);

LD.number = 1:length(ldidx);
LD.type   = sysdata(ldidx,4)';
LD.bus    = sysdata(ldidx,1)';
LD.Vnom   = sysdata(ldidx,5)';
LD.Snom   = sysdata(ldidx,7)';
LD.Rpos   = sysdata(ldidx,8)';
LD.Xpos   = sysdata(ldidx,9)';
LD.Rneg   = sysdata(ldidx,10)';
LD.Xneg   = sysdata(ldidx,11)';
LD.Rzero  = sysdata(ldidx,12)';
LD.Xzero  = sysdata(ldidx,13)';
LD.Zn     = sysdata(ldidx,14)';
%
% Mudanca de base
%
sld = find(LD.Snom~=PS.Sbase);
if ~isempty(sld)
  if LD.Snom(sld) ~= PS.Sbase
     LD.Xpos(sld)  = LD.Xpos(sld)  .* (PS.Sbase./LD.Snom(sld));
     LD.Xneg(sld)  = LD.Xneg(sld)  .* (PS.Sbase./LD.Snom(sld));
     LD.Xzero(sld) = LD.Xzero(sld) .* (PS.Sbase./LD.Snom(sld));
     fprintf(1,'\nAviso: A reatancia da carga %d foi alterada, pois Scarga <> Sbase',LD.number(sld)); 
  end     
end

fprintf(1,'-ADICIONANDO OS COMPONENTES DO SISTEMA....OK\n');

%-----------------------------------------------------------------------------
% Calcula a matriz de admitancia de sequencia positiva Ypos
%-----------------------------------------------------------------------------
%
% Inicializa variaveis contendo matrizes nbus linhas x nbus colunas
%

Ypos = zeros(nbus);
Ypos1= zeros(nbus);
%
% Calcula Ybus de sequencia positiva para os trafos
%

if ~isempty(Tf.number)
   for ntf = 1:length(Tf.number),
       nltf1(ntf,1) = Tf.Pbus(1,ntf);
       nrtf1(ntf,1) = Tf.Sbus(1,ntf);
       Rtf1(ntf,1)  = Tf.Rpos(1,ntf);
       Xtf1(ntf,1)  = Tf.Xpos(1,ntf);
       %
       % Calcula Tap do Trafo
       %
       Ytrafo = 1/(Tf.Rpos(1,ntf) + j*Tf.Xpos(1,ntf));
       Tap1 = ( 1 / Tf.Tap(1,ntf) ) * ( ( 1 / Tf.Tap(1,ntf) ) - 1 );
       Tap2 = ( 1 - ( 1/Tf.Tap(1,ntf) ) );
       Ypos(nltf1(ntf,1),nltf1(ntf,1))= Ypos(nltf1(ntf,1),nltf1(ntf,1)) + Tap1 * Ytrafo;
       Ypos(nrtf1(ntf,1),nrtf1(ntf,1))= Ypos(nrtf1(ntf,1),nrtf1(ntf,1)) + Tap2 * Ytrafo;
       
       %
   end    
   Ztf  = Rtf1 + jota*Xtf1;
   Ztf1 = ( Rtf1 + jota*Xtf1 ) .* Tf.Tap';
   Ypos1= Ypositive(nbus,nltf1,nrtf1,Ztf1);
   Ypos = Ypositive(nbus,nltf1,nrtf1,Ztf);
end;

%
% Calcula Ybus de sequencia positiva para as L.T.
%

if ~isempty(LT.number)
   for nlt = 1:length(LT.number),
       nllt1(nlt,1) = LT.frombus(1,nlt);
       nrlt1(nlt,1) = LT.tobus(1,nlt);
       Rlt1(nlt,1)  = LT.Rpos(1,nlt);
       Xlt1(nlt,1)  = LT.Xpos(1,nlt);
       %
       % Adiciona Y shunt
       %
       Ypos(nllt1(nlt,1),nllt1(nlt,1))= Ypos(nllt1(nlt,1),nllt1(nlt,1)) + (LT.Ysh(1,nlt)/2) * i;
       Ypos(nrlt1(nlt,1),nrlt1(nlt,1))= Ypos(nrlt1(nlt,1),nrlt1(nlt,1)) + (LT.Ysh(1,nlt)/2) * i;
   end    
   Zlt1 = Rlt1 + jota*Xlt1;
   Ypos = Ypos + Ypositive(nbus,nllt1,nrlt1,Zlt1);  
   Ypos1 = Ypos1 + Ypos;
end

%
% Calcula Ybus de sequencia positiva para os geradores
%

if ~isempty(Gen.number)
   for ngen = 1:length(Gen.number),
       nlgen1(ngen,1) = Gen.bus(1,ngen);
       nrgen1(ngen,1) = Gen.bus(1,ngen);
       Rgen1(ngen,1)  = Gen.Rpos(1,ngen);
       Xgen1(ngen,1)  = Gen.Xpos(1,ngen);
       Zngen1(ngen,1) = Gen.Zn(1,ngen);
   end    
   Zgen1 = Rgen1 + jota*Xgen1 + 3*jota*Zngen1;  
   Ypos  = Ypos + Ypositive(nbus,nlgen1,nrgen1,Zgen1); 
   Ypos1 = Ypos1 + Ypos;
end 

%
% Calcula Ybus de sequencia positiva para as cargas
%

 if ~isempty(LD.number)
    for nld = 1:length(LD.number),
        nlld1(nld,1) = LD.bus(1,nld);
        nrld1(nld,1) = LD.bus(1,nld);
        Rld1(nld,1)  = LD.Rpos(1,nld);
        Xld1(nld,1)  = LD.Xpos(1,nld);
        Znld1(nld,1) = LD.Zn(1,nld);
    end  
    Zld1 = Rld1 + jota*Xld1 + 3*jota*Znld1;  
    Ypos = Ypos + Ypositive(nbus,nlld1,nrld1,Zld1); 
    Ypos1 = Ypos1 + Ypos;    
end

fprintf(1,'-CALCULANDO MATRIZ YBUS POS....OK\n');

%
% Calcula a matriz de impedancias Zbus sequencia positiva
% 

Zbuspos = inv(Ypos);

% Calcula as tensoes de pre falta utilizando o metodo de
% Newton-Raphson para fluxo de potencia
%
if metodo == 1
   [Bus,erro,niter] = newtonraph(Ypos1,busnames,busdata); 
   fprintf(1,'-ANALISANDO FLUXO DE POTENCIA....OK\n');
else    
   Bus.names     = busnames(1,:);  
   Bus.number    = busdata(:,1)'; % No do barramento
   Bus.type      = busdata(:,2)'; % Tipo de Barramento
   Bus.Pg        = busdata(:,3)'; % Potencia ativa de geracao
   Bus.Qg        = busdata(:,4)'; % Potencia reativa de geracao
   Bus.Pc        = busdata(:,5)'; % Potencia ativa de carga
   Bus.Qc        = busdata(:,6)'; % Potencia reativa de carga
   Bus.Vmag      = Vibus .* ones(1,nbus); % Tensao do barramento
   Bus.Vdeg      = busdata(:,8)'; % Angulo da tensao em raianos 
   Bus.Vbase     = busdata(:,9)'; % Tensao base do barramento
   error         = 0;
   niter         = 0;    
end;   

%-----------------------------------------------------------------------------
% Calcula a matriz de admitancia de sequencia negativa Yneg
%-----------------------------------------------------------------------------
%
% Inicializa variaveis contendo matrizes nbus linhas x nbus colunas
%

Yneg = zeros(nbus);

%
% Calcula Ybus de sequencia negativa para os trafos
%

if ~isempty(Tf.number)
  for ntf = 1:length(Tf.number),
      nltf2(ntf,1) = Tf.Pbus(1,ntf);
      nrtf2(ntf,1) = Tf.Sbus(1,ntf);
      Rtf2(ntf,1)  = Tf.Rneg(1,ntf);
      Xtf2(ntf,1)  = Tf.Xneg(1,ntf);
  end    
  Ztf2 = Rtf2 + jota*Xtf2; 
  Yneg = Ypositive(nbus,nltf2,nrtf2,Ztf2);
end;

%
% Calcula Ybus de sequencia negativa para as L.T.
%

if ~isempty(LT.number)
  for nlt = 1:length(LT.number),
      nllt2(nlt,1) = LT.frombus(1,nlt);
      nrlt2(nlt,1) = LT.tobus(1,nlt);
      Rlt2(nlt,1)  = LT.Rneg(1,nlt);
      Xlt2(nlt,1)  = LT.Xneg(1,nlt);
      %
      % Adiciona Y shunt
      %
      Yneg(nllt2(nlt,1),nllt2(nlt,1))= Yneg(nllt2(nlt,1),nllt2(nlt,1)) + (LT.Ysh(1,nlt)/2) * i;
      Yneg(nrlt2(nlt,1),nrlt2(nlt,1))= Yneg(nrlt2(nlt,1),nrlt2(nlt,1)) + (LT.Ysh(1,nlt)/2) * i;
  end    
  Zlt2 = Rlt2 + jota*Xlt2;  
  Yneg = Yneg + Ypositive(nbus,nllt2,nrlt2,Zlt2);  
end

%
% Calcula Ybus de sequencia negativa para os geradores
%

if ~isempty(Gen.number)
  for ngen = 1:length(Gen.number),
      nlgen2(ngen,1) = Gen.bus(1,ngen);
      nrgen2(ngen,1) = Gen.bus(1,ngen);
      Rgen2(ngen,1)  = Gen.Rneg(1,ngen);
      Xgen2(ngen,1)  = Gen.Xneg(1,ngen);
      Zngen1(ngen,1) = Gen.Zn(1,ngen);
  end    
  Zgen2 = Rgen2 + jota*Xgen2 + 3*jota*Zngen1;  
  Yneg  = Yneg + Ypositive(nbus,nlgen2,nrgen2,Zgen2); 
end;  

%
% Calcula Ybus de sequencia negativa para as cargas
%

if ~isempty(LD.number)
  for nld = 1:length(LD.number),
      nlld2(nld,1) = LD.bus(1,nld);
      nrld2(nld,1) = LD.bus(1,nld);
      Rld2(nld,1)  = LD.Rneg(1,nld);
      Xld2(nld,1)  = LD.Xneg(1,nld);
      Znld1(nld,1) = LD.Zn(1,nld);
  end  
  Zld2 = Rld2 + jota*Xld2 + 3*jota*Znld1;  
  Yneg = Yneg + Ypositive(nbus,nlld2,nrld2,Zld2);  
end;
fprintf(1,'-CALCULANDO MATRIZ YBUS NEG....OK\n');
%
% Calcula a matriz de impedancias Zbus sequencia negativa
% 

Zbusneg = inv(Yneg);

%-----------------------------------------------------------------------------
% Calcula a matriz de admitancia de sequencia negativa Yneg
%-----------------------------------------------------------------------------
%
% Inicializa variaveis contendo matrizes nbus linhas x nbus colunas
%  

Y0   = zeros(nbus);
Y00   = zeros(nbus);%
% Calcula Ybus de sequencia zero para os trafos
%

if ~isempty(Tf.number)
  for ntf = 1:length(Tf.number),
      nltf0(ntf,1) = Tf.Pbus(1,ntf);
      nrtf0(ntf,1) = Tf.Sbus(1,ntf);
      Rtf0(ntf,1)  = Tf.Rzero(1,ntf);
      Xtf0(ntf,1)  = Tf.Xzero(1,ntf);
      tftype(ntf,1)  = Tf.type(1,ntf);   
  end    
  Ztf0 = Rtf0 + jota*Xtf0;
  Y0   = Yzero(nbus,nltf0,nrtf0,Ztf0,tftype);
end;

%
% Calcula Ybus de sequencia zero para as L.T.
%

if ~isempty(LT.number)
  for nlt = 1:length(LT.number),
      nllt0(nlt,1) = LT.frombus(1,nlt);
      nrlt0(nlt,1) = LT.tobus(1,nlt);
      Rlt0(nlt,1)  = LT.Rzero(1,nlt);
      Xlt0(nlt,1)  = LT.Xzero(1,nlt);
 
     if ~isempty(Tf.number)
        for ntf = 1:length(Tf.number),
           tftype(ntf,1)  = Tf.type(1,ntf);
           if (Tf.Sbus(1,ntf) == nllt0(nlt,1))
              if (tftype(ntf,1) == 1) | (tftype(ntf,1) == 3) 
                 Y00(nrlt0(nlt,1),nrlt0(nlt,1)) = Y00(nrlt0(nlt,1),nrlt0(nlt,1)) + 1/(Rlt0(nlt,1) + jota*Xlt0(nlt,1)) ;
              end   
           end
           if (Tf.Sbus(1,ntf) == nrlt0(nlt,1))
              if (tftype(ntf,1) == 1) | (tftype(ntf,1) == 3) 
                 Y00(nllt0(nlt,1),nllt0(nlt,1)) = Y00(nllt0(nlt,1),nllt0(nlt,1)) + 1/(Rlt0(nlt,1) + jota*Xlt0(nlt,1)) ;              
              end   
           end 
           if (Tf.Pbus(1,ntf) == nllt0(nlt,1))
              if (tftype(ntf,1) == 1) | (tftype(ntf,1) == 3) 
                 Y00(nrlt0(nlt,1),nrlt0(nlt,1)) = Y00(nrlt0(nlt,1),nrlt0(nlt,1)) + 1/(Rlt0(nlt,1) + jota*Xlt0(nlt,1)) ;
              end
           end   
           if (Tf.Pbus(1,ntf) == nrlt0(nlt,1))
              if (tftype(ntf,1) == 1) | (tftype(ntf,1) == 3)       
              Y00(nllt0(nlt,1),nllt0(nlt,1)) = Y00(nllt0(nlt,1),nllt0(nlt,1)) + 1/(Rlt0(nlt,1) + jota*Xlt0(nlt,1)) ;              
              end   
           end
        end   
     end
  end  
    Y00 = -Y00;
    Zlt0 = Rlt0 + jota*Xlt0;
    Y0   = Y0 + Ypositive(nbus,nllt0,nrlt0,Zlt0);
  
end

%
% Calcula Ybus de sequencia zero para os geradores
%

if ~isempty(Gen.number)
  for ngen = 1:length(Gen.number),
      nlgen0(ngen,1)  = Gen.bus(1,ngen);
      nrgen0(ngen,1)  = Gen.bus(1,ngen);
      Rgen0(ngen,1)   = Gen.Rzero(1,ngen);
      Xgen0(ngen,1)   = Gen.Xzero(1,ngen);
      gentype(ngen,1) = Gen.type(1,ngen);
      Zngen1(ngen,1)  = Gen.Zn(1,ngen);
  end    
  Zgen0 = Rgen0 + jota*Xgen0 + 3*jota*Zngen1;  
  Y0    = Y0 + Yzero(nbus,nlgen0,nrgen0,Zgen0,gentype); 
end  

%
% Calcula Ybus de sequencia zero para as cargas
%

if ~isempty(LD.number)
   for nld = 1:length(LD.number),
       nlld0(nld,1)  = LD.bus(1,nld);
       nrld0(nld,1)  = LD.bus(1,nld);
       Rld0(nld,1)   = LD.Rzero(1,nld);
       Xld0(nld,1)   = LD.Xzero(1,nld);
       ldtype(nld,1) = LD.type(1,nld);
       Znld1(nld,1)  = LD.Zn(1,nld);
   end  
   Zld0 = Rld0 + jota*Xld0 + 3*jota*Znld1;  
   Y0   = Y0 + Yzero(nbus,nlld0,nrld0,Zld0,ldtype);  
end;
fprintf(1,'-CALCULANDO MATRIZ YBUS ZERO....OK\n');
%
% Calcula a matriz de impedancias Zbus sequencia zero
% 

Zbus0   = inv(Y0);

%-----------------------------------------------------------------------------
% Calcula as correntes de falta trifasica
%-----------------------------------------------------------------------------
%
% Inicializa variaveis
%

LLLpu       = zeros(3,nbus); % Matriz de dados temporario
LLLIpu      = zeros(3,nbus); % Matriz de dados temporario

LLLBIpu     = zeros(nbus);
LLL.Busr    = [];            % Barra de referencia para CC
LLL.BusCC   = [];            % Barra de falta
LLL.MagApu  = [];            % Tensao fase A em pu 
LLL.MagBpu  = [];            % Tensao fase B em pu
LLL.MagCpu  = [];            % Tensao fase C em pu
LLL.MagAkv  = [];            % Tensao fase A em kV
LLL.MagBkv  = [];            % Tensao fase B em kV
LLL.MagCkv  = [];            % Tensao fase C em kV

LLL.IccApu  = [];            % Corrente fase A em pu 
LLL.IccBpu  = [];            % Corrente fase B em pu
LLL.IccCpu  = [];            % Corrente fase C em pu

LLL.IccAkA  = [];            % Corrente fase A em kA
LLL.IccBkA  = [];            % Corrente fase B em kA
LLL.IccCkA  = [];            % Corrente fase C em kA

Ia10        = zeros(nbus);   % Corrente de sequencia Ia10 = Ia11 = Ia12

Vf3pu  = zeros(nbus);
Vf3kv  = zeros(nbus);
Vth3pu = zeros(nbus);
Icc3pu = zeros(nbus);  
Icc3kA = zeros(nbus);  
Ibase3 = zeros(nbus,1);
Icc3   = zeros(nbus,1); 

%
% Calcula corrente Ibase
%
[X,Y] = pol2cart(deg2rad(Bus.Vdeg),Bus.Vbase);
BusVbase = X + jota*Y;
Vbus3  = Bus.Vmag .* BusVbase;
Ibase3 = PS.Sbase./( sqrt(3) * Vbus3); 

Ia13 = Zf + Zbuspos; 
%
% Calcula as correntes , variacoes de tensao e a tensao final dos barramentos
%

for ii=1:nbus,
   for k=1:nbus, 
       Vth3pu(ii,k) =  Bus.Vmag(k) - ( Zbuspos(ii,k) / Zbuspos(ii,ii) ) * Bus.Vmag(ii);
       Zbuspos(ii,k) * -Icc3pu(ii,k);
       Vf3pu(ii,k)  =  Bus.Vmag(ii) - Vth3pu(ii,k);
       Vf3kv(ii,k)  =  Vf3pu(ii,k) * (Bus.Vmag(ii) * Bus.Vbase(ii));  
       Icc3pu(ii,k) =  Bus.Vmag(ii) / Ia13(ii,k);    
       Icc3kA(ii,k) = Icc3pu(ii,k) * Ibase3(k); 
   end      
end

n=0;
for ii=1:nbus    
    for k=1:nbus,
      LLL.Busr(k+n)  = k;  
      LLL.BusCC(k+n) = ii; 
      LLLpu  = Vth3pu(ii,k) * [ 1 ; a2 ; a];
      LLLIpu = Icc3pu(ii,k) * [ 1 ; a2 ; a];
      for l = 1:nbus
          LLLBIpu(l,k+n)    =  Ypos(l,k) * ( Vth3pu(ii,l) - Vth3pu(ii,k) );   
      end

      LLL.MagApu(k+n)  = LLLpu(1,1);
      LLL.MagAkv(k+n)  = Vbus3(1,k) * LLLpu(1,1);
      LLL.MagBpu(k+n)  = LLLpu(2,1);
      LLL.MagBkv(k+n)  = Vbus3(1,k) * LLLpu(2,1);
      LLL.MagCpu(k+n)  = LLLpu(3,1);  
      LLL.MagCkv(k+n)  = Vbus3(1,k) * LLLpu(3,1);
      
      %LLL.IccApu(k+n)  = LLLBIpu;
      LLL.IccAkA(k+n)  = LLLIpu(1,1) * Ibase3(k);
      LLL.IccBpu(k+n)  = LLLIpu(2,1);
      LLL.IccBkA(k+n)  = LLLIpu(2,1) * Ibase3(k);
      LLL.IccCpu(k+n)  = LLLIpu(3,1);  
      LLL.IccCkA(k+n)  = LLLIpu(3,1) * Ibase3(k);
   end
n = n + nbus;    
end
fprintf(1,'-CALCULANDO CURTO-CIRCUITO TRIFASICO....OK\n');

%-----------------------------------------------------------------------------
% Calcula as correntes de falta monofasica
%-----------------------------------------------------------------------------
%
% Inicializa variaveis

SLGpu       = zeros(3,nbus); % Matriz de dados temporario
SLGIApu     = zeros(3,nbus); % Matriz de dados temporario
SLGIBpu     = zeros(3,nbus); % Matriz de dados temporario
SLGICpu     = zeros(3,nbus); % Matriz de dados temporario

SLG.Busr    = [];            % Barra de referencia para CC
SLG.BusCC   = [];            % Barra de falta
SLG.MagApu  = [];            % Tensao fase A em pu 
SLG.MagBpu  = [];            % Tensao fase B em pu
SLG.MagCpu  = [];            % Tensao fase C em pu
SLG.MagAkv  = [];            % Tensao fase A em kV
SLG.MagBkv  = [];            % Tensao fase B em kV
SLG.MagCkv  = [];            % Tensao fase C em kV

SLG.IccApu  = [];            % Corrente fase A em pu 
SLG.IccBpu  = [];            % Corrente fase B em pu
SLG.IccCpu  = [];            % Corrente fase C em pu

SLG.IccAkA  = [];            % Corrente fase A em kA
SLG.IccBkA  = [];            % Corrente fase B em kA
SLG.IccCkA  = [];            % Corrente fase C em kA

Ia0slg      = [];
Ia1slg      = [];
Ia2slg      = [];

Icc1pu  = zeros(nbus);       % Corrente de CC em pu
Ia10    = zeros(nbus);       % Corrente de sequencia Ia10 = Ia11 = Ia12
Ibase1  = zeros(nbus,1);     % Corrente Base do sistema
Icc1    = zeros(nbus,1);     % Corrente de CC em kA

%
% Calcula corrente Ibase
%
[X,Y] = pol2cart(deg2rad(Bus.Vdeg),Bus.Vbase);
BusVbase = X + jota*Y;

Vbus1  = Bus.Vmag .* BusVbase;
Ibase1 = PS.Sbase./( sqrt(3) * Vbus1); 

%
% Calcula da corrente de C.C.
%

Ia10 = 3*jota*Zf + Zbuspos + Zbusneg + Zbus0; 
for k=1:nbus,   
    for ii=1:nbus,
        Ia10(ii,k)    =  Bus.Vmag(k) / Ia10(ii,k);
    end    
end    

%
% Calcula das variacoes de tensao e a tensao final dos barramentos
%

for k=1:nbus,        
    for ii=1:nbus, 
%       Ia10(ii,k)    =  Bus.Vmag(k) / Ia10(ii,k);
       Icc1pu(ii,k)  =  3 * Ia10(k,k);
       Icc1(ii,k)    =  Ibase1(k) .* Icc1pu(ii,k);
       Vth1pu0(ii,k) =  Zbus0(ii,k) * -Ia10(k,k);
       Vth1pu1(ii,k) =  Bus.Vmag(k) + Zbuspos(ii,k) * -Ia10(k,k);
       Vth1pu2(ii,k) =  Zbusneg(ii,k) * -Ia10(k,k);
   end      
end

%
% Calcula as tensoes finais do barramento
%


n=0;
aj=0;
for ii=1:nbus    
    for k=1:nbus,
      SLG.Busr(k+n)  = k;  
      SLG.BusCC(k+n) = ii; 
      SLGpu  = T * [Vth1pu0(k,ii);Vth1pu1(k,ii);Vth1pu2(k,ii)];
     % SLGIpu = T * [Ia10(ii,k);Ia10(ii,k);Ia10(ii,k)];
    for l = 1:nbus
         Ia0slg     =  ( Vth1pu0(k,ii) - Vth1pu0(l,ii) ) * Y0(k,l);   
         Ia1slg     =  ( Vth1pu1(k,ii) - Vth1pu1(l,ii) ) * Ypos(k,l);  
         Ia2slg     =  ( Vth1pu2(k,ii) - Vth1pu2(l,ii) ) * Yneg(k,l);  
         SLGIpu     =  T * [Ia0slg;Ia1slg;Ia2slg];      
         SLGIApu(l,k+n)  = SLGIpu(1,1);
         SLGIBpu(l,k+n)  = SLGIpu(2,1);
         SLGICpu(l,k+n)  = SLGIpu(3,1);  
     end 
     
    
      %SLGIpu = T * [Ia0slg(ii,k);Ia1slg(ii,k);Ia2slg(ii,k)];
      SLG.MagApu(k+n)  = SLGpu(1,1);
      SLG.MagAkv(k+n)  = Vbus1(1,k) * SLGpu(1,1);
      SLG.MagBpu(k+n)  = SLGpu(2,1);
      SLG.MagBkv(k+n)  = Vbus1(1,k) * SLGpu(2,1);
      SLG.MagCpu(k+n)  = SLGpu(3,1);  
      SLG.MagCkv(k+n)  = Vbus1(1,k) * SLGpu(3,1);
      
      
   end
n = n + nbus;    
end

fprintf(1,'-CALCULANDO CURTO-CIRCUITO MONOFASICO....OK\n');

%-----------------------------------------------------------------------------
% Calcula as correntes de falta bifasica
%-----------------------------------------------------------------------------
%
% Inicializa variaveis

LLFpu       = zeros(3,nbus); % Matriz de dados temporario
LLFIpu      = zeros(3,nbus); % Matriz de dados temporario

LLFIApu     = zeros(3,nbus); % Matriz de dados temporario
LLFIBpu     = zeros(3,nbus); % Matriz de dados temporario
LLFICpu     = zeros(3,nbus); % Matriz de dados temporario

LLF.Busr    = [];            % Barra de referencia para CC
LLF.BusCC   = [];            % Barra de falta
LLF.MagApu  = [];            % Tensao fase A em pu 
LLF.MagBpu  = [];            % Tensao fase B em pu
LLF.MagCpu  = [];            % Tensao fase C em pu
LLF.MagAkv  = [];            % Tensao fase A em kV
LLF.MagBkv  = [];            % Tensao fase B em kV
LLF.MagCkv  = [];            % Tensao fase C em kV

LLF.IccApu  = [];            % Corrente fase A em pu 
LLF.IccBpu  = [];            % Corrente fase B em pu
LLF.IccCpu  = [];            % Corrente fase C em pu

LLF.IccAkA  = [];            % Corrente fase A em kA
LLF.IccBkA  = [];            % Corrente fase B em kA
LLF.IccCkA  = [];            % Corrente fase C em kA

Ia0llf      = [];
Ia1llf      = [];
Ia2llf      = [];

Icc2pu  = zeros(nbus);       % Corrente de CC em pu
Ia20    = zeros(nbus);       % Corrente de sequencia Ia20
Ia21    = zeros(nbus);       % Corrente de sequencia Ia21
Ia22    = zeros(nbus);       % Corrente de sequencia Ia22 = -Ia21
Ibase2  = zeros(nbus,1);     % Corrente Base do sistema
Icc2    = zeros(nbus,1);     % Corrente de CC em kA

%
% Calcula corrente Ibase
%

[X,Y] = pol2cart(deg2rad(Bus.Vdeg),Bus.Vbase);
BusVbase = X + jota*Y;

Vbus2  = Bus.Vmag .* BusVbase;
Ibase2 = PS.Sbase./( sqrt(3) * Vbus2); 

%
% Calcula da corrente de C.C.
%

Ia21   = ( jota*Zf +  Zbuspos + Zbusneg ) ; 

%
% Calcula das variacoes de tensao e a tensao final dos barramentos
%

for ii=1:nbus,
   for k=1:nbus, 
       Ia21(ii,k)    =  Bus.Vmag(ii) / ( jota*Zf +  Zbuspos(ii,k) + Zbusneg(ii,k) );
       Icc2pu(ii,k)  = -jota*sqrt(3) * Ia21(ii,k);
       Icc2(ii,k)    =  Ibase2(ii) * Icc2pu(ii,k);
       Ia22(ii,k)    =  -Ia21(ii,k);
       Va20(ii,k)    =  0;
       Va21(ii,k)    =  Bus.Vmag(ii) - ( Zbuspos(ii,k) * Ia21(ii,k) );
       Va22(ii,k)    =  - ( Ia22(ii,k) * Zbusneg(ii,k) );% Va21(ii,k); 
      % Vth2pu0(ii,k) =  Zbus0(ii,k) * 0;
      % Vth2pu1(ii,k) =  Bus.Vmag(ii) - Zbuspos(ii,k) * Ia21(ii,k);
      % Vth2pu2(ii,k) =  Zbusneg(ii,k) * Ia22(ii,k);
   end      
end

%
% Calcula as tensoes finais do barramento
%

n=0;

   
for ii=1:nbus    
    for k=1:nbus,
      LLF.Busr(k+n)  = k;  
      LLF.BusCC(k+n) = ii; 
      LLFpu   = T * [Va20(k,ii);Va21(k,ii);Va22(k,ii)];
      LLFpuI  = T * [Ia20(k,ii);Ia21(k,ii);Ia22(k,ii)];
      
      for l = 1:nbus
          %LLFpu1      = (T * [Va20(k,ii);Va21(k,ii);Va22(k,ii)]);
          LLFpu2      = (T * [Va20(l,ii);Va21(l,ii);Va22(l,ii)]);
         
         % Ia1llf     =  ( Va21(k,ii) - Va21(l,ii) ) * Ypos(l,ii);  
         % Ia0llf     =  ( Va20(k,ii) - Va20(l,ii) ) * Y0(l,ii);
         % Ia2llf     = -Ia1llf ;% ( Ia22(k,ii) - Ia22(l,ii) ); 
         % LLFIpu     =  T * [Ia0llf;Ia1llf;Ia2llf];      
   
          %LLFIApu(l,k+n)  = LLFIpu(1,1);
          %LLFIBpu(l,k+n)  = LLFIpu(2,1);
          %LLFICpu(l,k+n)  = LLFIpu(3,1);  
          
          LLFIApu(l,k+n)  = (LLFpu(1,1) - LLFpu2(1,1)) * Ypos(l,ii); 
          LLFIBpu(l,k+n)  = (LLFpu(2,1) - LLFpu2(2,1)) * Ypos(l,ii); 
          LLFICpu(l,k+n)  = (LLFpu(3,1) - LLFpu2(3,1)) * Ypos(l,ii); 
     end 
     
 
      
      LLF.MagApu(k+n)  = LLFpu(1,1);
      LLF.MagAkv(k+n)  = Vbus2(1,k) * LLFpu(1,1);
      LLF.MagBpu(k+n)  = LLFpu(2,1);
      LLF.MagBkv(k+n)  = Vbus2(1,k) * LLFpu(2,1);
      LLF.MagCpu(k+n)  = LLFpu(3,1);  
      LLF.MagCkv(k+n)  = Vbus2(1,k) * LLFpu(3,1);
      
      LLF.IccApu(k+n)  = LLFIpu(1,1);
      LLF.IccAkA(k+n)  = LLFIpu(1,1) * Ibase2(1,k);
      LLF.IccBpu(k+n)  = LLFIpu(2,1);
      LLF.IccBkA(k+n)  = LLFIpu(2,1) * Ibase2(1,k);
      LLF.IccCpu(k+n)  = LLFIpu(3,1);  
      LLF.IccCkA(k+n)  = LLFIpu(3,1) * Ibase2(1,k);

   end
n = n + nbus;    
end
fprintf(1,'-CALCULANDO CURTO-CIRCUITO BIFASICO....OK\n');

%-----------------------------------------------------------------------------
% Calcula as correntes de falta bifasica para terra
%-----------------------------------------------------------------------------
%
% Inicializa variaveis

LLGpu       = zeros(3,nbus); % Matriz de dados temporario
LLGIpu      = zeros(3,nbus); % Matriz de dados temporario

LLGIApu     = zeros(3,nbus); % Matriz de dados temporario
LLGIBpu     = zeros(3,nbus); % Matriz de dados temporario
LLGICpu     = zeros(3,nbus); % Matriz de dados temporario


LLG.Busr    = [];            % Barra de referencia para CC
LLG.BusCC   = [];            % Barra de falta
LLG.MagApu  = [];            % Tensao fase A em pu 
LLG.MagBpu  = [];            % Tensao fase B em pu
LLG.MagCpu  = [];            % Tensao fase C em pu
LLG.MagAkv  = [];            % Tensao fase A em kV
LLG.MagBkv  = [];            % Tensao fase B em kV
LLG.MagCkv  = [];            % Tensao fase C em kV

LLG.IccApu  = [];            % Corrente fase A em pu 
LLG.IccBpu  = [];            % Corrente fase B em pu
LLG.IccCpu  = [];            % Corrente fase C em pu

LLG.IccAkA  = [];            % Corrente fase A em kA
LLG.IccBkA  = [];            % Corrente fase B em kA
LLG.IccCkA  = [];            % Corrente fase C em kA

Ia0llg      = [];
Ia1llg      = [];
Ia2llg      = [];

Icc2gpu  = zeros(nbus);       % Corrente de CC em pu
Ibase2g  = zeros(nbus,1);     % Corrente Base do sistema
Icc2g    = zeros(nbus);       % Corrente de CC em kA
Ip2gpu   = zeros(nbus);       % Corrente de pos falta em pu

%
% Calcula corrente Ibase
%

[X,Y] = pol2cart(deg2rad(Bus.Vdeg),Bus.Vbase);
BusVbase = X + jota*Y;

Vbus2g  = Bus.Vmag .* BusVbase;
Ibase2g = PS.Sbase./( sqrt(3) * Vbus2g); 

%
% Calcula da corrente de sequencias
%

part1 = Zbusneg .* ( Zbus0 + 3*jota*Zf );
part2 = Zbusneg + Zbus0 + 3*jota*Zf;
part3 = Zbuspos + part1./part2;

Ia2   = -( Zbus0 ./ ( Zbusneg + Zbus0 ) ) ;
Ia0   = -( Zbusneg ./ ( Zbusneg + Zbus0 ) ) ;

%
% Calcula as variacoes de tensao e a tensao final dos barramentos
%

Zbus0 = Zbus0 + 10e-15;
for ii=1:nbus,
   for k=1:nbus, 
       
       Ia1(ii,k) = Bus.Vmag(ii) / part3(ii,k); 
     %  Ia2(ii,k) = Ia2(ii,k) * Ia1(ii,k);       
     %  Ia0(ii,k) = Ia0(ii,k) * Ia1(ii,k);
       
       Ia2(ii,k) = -( Zbus0(ii,k) / ( Zbusneg(ii,k) + Zbus0(ii,k) ) ) * Ia1(ii,k);
       
       Ia0(ii,k) =  -( Zbusneg(ii,k) / ( Zbusneg(ii,k) + Zbus0(ii,k) ) ) * Ia1(ii,k) ;
       
       Vthllgpu0(ii,k) =  -Zbus0(ii,k) * Ia0(ii,k);
       Vthllgpu1(ii,k) =  Bus.Vmag(ii) - Zbuspos(ii,k) * Ia1(ii,k);
       Vthllgpu2(ii,k) =  -Zbusneg(ii,k) * Ia2(ii,k);     
       Icc2gpu(ii,k)   = 2 * Ia0(ii,k) - Ia1(ii,k) - Ia2(ii,k);
       Icc2g(ii,k)     = Ibase2g(ii) * Icc2gpu(ii,k);
   end      
end

%
% Calcula as tensoes finais do barramento
%

n=0;
for ii=1:nbus    
    for k=1:nbus,
      LLG.Busr(k+n)  = k;  
      LLG.BusCC(k+n) = ii; 
      LLGpu  = T * [Vthllgpu0(k,ii);Vthllgpu1(k,ii);Vthllgpu2(k,ii)];
     % LLGIpu = T * [Ia0(ii,k);Ia1(ii,k);Ia2(ii,k)];
      
      for l = 1:nbus
         Ia0llg     =  ( Vthllgpu0(k,ii) - Vthllgpu0(l,ii) ) * Y0(k,l);   
         Ia1llg     =  ( Vthllgpu1(k,ii) - Vthllgpu1(l,ii) ) * Ypos(k,l);  
         Ia2llg     =  ( Vthllgpu2(k,ii) - Vthllgpu2(l,ii) ) * Yneg(k,l);  
         LLGIpu     =  T * [Ia0llg;Ia1llg;Ia2llg];      
         LLGIApu(l,k+n)  = LLGIpu(1,1);
         LLGIBpu(l,k+n)  = LLGIpu(2,1);
         LLGICpu(l,k+n)  = LLGIpu(3,1);  
     end 
     
      
      LLG.MagApu(k+n)  = LLGpu(1,1);
      LLG.MagAkv(k+n)  = Vbus2g(1,k) * LLGpu(1,1);
      LLG.MagBpu(k+n)  = LLGpu(2,1);
      LLG.MagBkv(k+n)  = Vbus2g(1,k) * LLGpu(2,1);
      LLG.MagCpu(k+n)  = LLGpu(3,1);  
      LLG.MagCkv(k+n)  = Vbus2g(1,k) * LLGpu(3,1);    

      LLG.IccApu(k+n)  = LLGIpu(1,1);
      LLG.IccAkA(k+n)  = LLGIpu(1,1) * Ibase2g(1,k);
      LLG.IccBpu(k+n)  = LLGIpu(2,1);
      LLG.IccBkA(k+n)  = LLGIpu(2,1) * Ibase2g(1,k);
      LLG.IccCpu(k+n)  = LLGIpu(3,1);  
      LLG.IccCkA(k+n)  = LLGIpu(3,1) * Ibase2g(1,k);
      
   end
n = n + nbus;    
end
fprintf(1,'-CALCULANDO CURTO-CIRCUITO BIFASICO/TERRA....OK\n');

%-----------------------------------------------------------------------------
% Gera relatorio
%-----------------------------------------------------------------------------

nb = 1;
nc = 1;
nd = 0;
ne = 1;
nf = 0;
ni = 0;
nj = 0;
nk = 1;
%
% Cria arquivo de saida
%
%dstatus = mkdir(outdir);
%fout = ([outdir,'\', fout,'.dat']); % Abre arquivo de saida
fid = fopen(fout,'w');


fprintf(fid,'                  ******************************************\n'); 
fprintf(fid,'                      SSSS      AAAA      CCCC      CCCC    \n'); 
fprintf(fid,'                     SSSSSS    AAAAAA    CCCCCC    CCCCCC   \n');                                       
fprintf(fid,'                    SS    SS  AA    AA  CC    CC  CC    CC  \n'); 
fprintf(fid,'                    SS        AA    AA  CC    CC  CC    CC  \n'); 
fprintf(fid,'                     SSSSS    AA AA AA  CC        CC        \n'); 
fprintf(fid,'                      SSSSS   AA AA AA  CC        CC        \n'); 
fprintf(fid,'                          SS  AA    AA  CC    CC  CC    CC  \n'); 
fprintf(fid,'                    SS    SS  AA    AA  CC    CC  CC    CC  \n'); 
fprintf(fid,'                     SSSSSS   AA    AA   CCCCCC    CCCCCC   \n'); 
fprintf(fid,'                      SSSS    AA    AA    CCCC      CCCC    \n'); 
fprintf(fid,'                  ******************************************\n'); 
fprintf(fid,'                    SOFTWARE DE ANÁLISE DE CURTO CIRCUITO   \n'); 
fprintf(fid,'                           EM SISTEMAS DE POTÊNCIA          \n'); 
fprintf(fid,'                               VERSÃO %s                    \n',version); 
fprintf(fid,'                  ******************************************\n\n'); 
fprintf(fid,'                              R E S U L T A D O S                        \n');
fprintf(fid,'==============================================================================\n'); 
fprintf(fid,'  DATA: %s                                                          \n',date);
fprintf(fid,'  SISTEMA: %s                                          \n',PS.title);
fprintf(fid,'  No BARRAS: %3.0f                                          \n',nbus);
fprintf(fid,'  No GERADORES: %3.0f                                          \n',ngen);
fprintf(fid,'  No TRANSFORMADORES: %3.0f                                          \n',ntf);
fprintf(fid,'  No LINHAS DE TRANSMISSAO: %3.0f                                          \n',nlt);
fprintf(fid,'  No CARGAS: %3.0f                                          \n',nld);
fprintf(fid,'  POTENCIA BASE: %4.2f MVA                                          \n',PS.Sbase);
fprintf(fid,'==============================================================================\n');
if metodo == 1
fprintf(fid,'==============================================================================\n');
fprintf(fid,'  ANALISE: TENSOES DE PRE FALTA                                               \n');
fprintf(fid,'  METODO : NEWTON RAPHSON                                                     \n');
fprintf(fid,'  TOLERANCIA  : %1.5f                                                         \n',erro);
fprintf(fid,'  No ITERACOES: %2d                                                           \n',niter);
fprintf(fid,'==============================================================================\n');
fprintf(fid,'* BUS  TIPO  PG(MW)   QG(MVAr)  PC(MW)   QC(MVAr)   TENSAO(kV)  ANGULO(o)    *\n');
fprintf(fid,'*----------------------------------------------------------------------------*\n');             
for x=1:nbus, 
   fprintf(fid,'*  %d  %4d  %6.1f   %6.1f    %6.1f   %6.1f   %9.2f   %9.2f       *\n',...
   Bus.number(x),Bus.type(x),Bus.Pg(x)*sbase,Bus.Qg(x)*sbase,Bus.Pc(x)*sbase,Bus.Qc(x)*sbase,...
   Bus.Vmag(x)*Bus.Vbase(x),Bus.Vdeg(x));
end;           
fprintf(fid,'==============================================================================\n');
fprintf(fid,'*               TIPO 1: SWING  TIPO 2: GERACAO  TIPO 3: CARGA                *\n');
fprintf(fid,'==============================================================================\n');
else
fprintf(fid,'==============================================================================\n');
fprintf(fid,'* TESNSOES DE PRE FALTA (pu) : %2.3f                                         *\n',Bus.Vmag(1));
fprintf(fid,'==============================================================================\n');
end    
    
fprintf(fid,'==============================================================================\n'); 
for ii=1:nbus
fprintf(fid,'  BARRA : %s\n',char(Bus.names(ii)));
fprintf(fid,'==============================================================================\n'); 
fprintf(fid,'* VALORES BASES                                                              *\n');
fprintf(fid,'==============================================================================\n');
fprintf(fid,'*                    TENSAO                        CORRENTE                  *\n'); 
fprintf(fid,'*         Magnitude(kV)   Angulo(Graus)   Magnitude(kA)  Angulo(graus)       *\n');
fprintf(fid,'*----------------------------------------------------------------------------*\n');             
fprintf(fid,'*             %-10.3f    %-10.3f       %-10.3f       %-10.3f     *\n',abs(Bus.Vbase(ii)) ,...
        abs(Bus.Vdeg(ii)) ,abs(Ibase3(1,ii)),rad2deg(angle(Ibase3(1,ii))));
fprintf(fid,'==============================================================================\n'); 
fprintf(fid,'* CORRENTE DE CURTO CIRCUITO TRIFASICA                                       *\n');
fprintf(fid,'==============================================================================\n'); 
fprintf(fid,'*              Magnitude(pu)     Magnitude(kA)    Angulo(graus)              *\n');
fprintf(fid,'*----------------------------------------------------------------------------*\n');             
fprintf(fid,'*                %-10.4f         %-10.3f       %-10.3f              *\n',abs(Icc3pu(ii,ii)) ,...
        abs(Icc3kA(ii,ii)) ,rad2deg(angle(Icc3kA(ii,ii))));

fprintf(fid,'==============================================================================\n'); 
fprintf(fid,'* CORRENTES DE POS FALTA TRIFASICA                                           *\n');
fprintf(fid,'==============================================================================\n');
fprintf(fid,'*         BARRAS                                                             *\n');
fprintf(fid,'*   DE             PARA             Magnitude(pu) Magnitude(kA) Angulo(graus)*\n');
fprintf(fid,'*----------------------------------------------------------------------------*\n');             
%for jj=1:nbus
    I3 = LLLBIpu(:,1+nj:nbus+nj);
    for jj=1:nbus
       for kk=1:nbus 
       if kk~= jj 
          if jj < kk 
    fprintf(fid,'* %2.15s  %2.15s %10.4f   %10.3f     %10.3f    *\n',char(Bus.names(LLL.Busr(jj))) ,char(Bus.names(LLL.Busr(kk))) ,...
            abs(I3(jj,kk)),abs(I3(jj,kk)*Ibase3(kk)),rad2deg(angle(I3(jj,kk)*Ibase3(kk))) );
       end 
   end
end;
end;
nj = nj + nbus;

fprintf(fid,'==============================================================================\n'); 
fprintf(fid,'* TENSOES DE POS FALTA TRIFASICA                                             *\n');
fprintf(fid,'==============================================================================\n');
fprintf(fid,'*     BARRA          FASE    Magnitude(pu)  Magnitude(kV)   Angulo(graus)    *\n');
fprintf(fid,'*----------------------------------------------------------------------------*\n');   
for jj=1:nbus
    fprintf(fid,'* %2.15s     A     %10.4f    %10.3f        %10.3f       *\n',char(Bus.names(LLL.Busr(jj))) ,...
            abs(LLL.MagApu(nk)),abs(LLL.MagAkv(nk)),rad2deg(angle(LLL.MagAkv(nk))));
    fprintf(fid,'* %2.15s     B     %10.4f    %10.3f        %10.3f       *\n',char(Bus.names(LLL.Busr(jj))) ,...
            abs(LLL.MagBpu(nk)),abs(LLL.MagBkv(nk)),rad2deg(angle(LLL.MagBkv(nk))));
    fprintf(fid,'* %2.15s     C     %10.4f    %10.3f        %10.3f       *\n',char(Bus.names(LLL.Busr(jj))) ,...
           abs(LLL.MagCpu(nk)),abs(LLL.MagCkv(nk)),rad2deg(angle(LLL.MagCkv(nk))));
    nk = nk + 1;
end
fprintf(fid,'==============================================================================\n'); 
fprintf(fid,'* CORRENTE DE CURTO CIRCUITO MONOFASICO                                      *\n');
fprintf(fid,'==============================================================================\n'); 
fprintf(fid,'*              Magnitude(pu)     Magnitude(kA)    Angulo(graus)              *\n');
fprintf(fid,'*----------------------------------------------------------------------------*\n');             
fprintf(fid,'*                %-10.4f         %-10.3f       %-10.3f              *\n',abs(Icc1pu(ii,ii)) ,...
        abs(Icc1(ii,ii)) ,rad2deg(angle(Icc1(ii,ii))));
fprintf(fid,'==============================================================================\n'); 
fprintf(fid,'* CORRENTES DE POS FALTA MONOFASICA  - FASE A                                *\n');
fprintf(fid,'==============================================================================\n');
fprintf(fid,'*         BARRAS                                                             *\n');
fprintf(fid,'*   DE             PARA             Magnitude(pu) Magnitude(kA) Angulo(graus)*\n');
fprintf(fid,'*----------------------------------------------------------------------------*\n');             
%for jj=1:nbus
    I1 = SLGIApu(:,1+ni:nbus+ni);
    for jj=1:nbus
       for kk=1:nbus 
       if kk~= jj 
          if jj < kk 
    fprintf(fid,'* %2.15s  %2.15s %10.4f   %10.3f     %10.3f    *\n',char(Bus.names(SLG.Busr(jj))) ,char(Bus.names(SLG.Busr(kk))) ,...
            abs(I1(jj,kk)),abs(I1(jj,kk)*Ibase1(kk)),rad2deg(angle(I1(jj,kk)*Ibase1(kk))) );
       end 
   end
end;
end;

fprintf(fid,'==============================================================================\n'); 
fprintf(fid,'* CORRENTES DE POS FALTA MONOFASICA  - FASE B                                *\n');
fprintf(fid,'==============================================================================\n');
fprintf(fid,'*         BARRAS                                                             *\n');
fprintf(fid,'*   DE             PARA             Magnitude(pu) Magnitude(kA) Angulo(graus)*\n');
fprintf(fid,'*----------------------------------------------------------------------------*\n');             
%for jj=1:nbus
I1 = SLGIBpu(:,1+ni:nbus+ni);
    for jj=1:nbus
       for kk=1:nbus 
       if kk~= jj 
          if jj < kk 
    fprintf(fid,'* %2.15s  %2.15s %10.4f   %10.3f     %10.3f    *\n',char(Bus.names(SLG.Busr(jj))) ,char(Bus.names(SLG.Busr(kk))) ,...
            abs(I1(jj,kk)),abs(I1(jj,kk)*Ibase1(kk)),rad2deg(angle(I1(jj,kk)*Ibase1(kk))) );
       end 
   end
end;
end;


fprintf(fid,'==============================================================================\n'); 
fprintf(fid,'* CORRENTES DE POS FALTA MONOFASICA  - FASE C                                *\n');
fprintf(fid,'==============================================================================\n');
fprintf(fid,'*         BARRAS                                                             *\n');
fprintf(fid,'*   DE             PARA             Magnitude(pu) Magnitude(kA) Angulo(graus)*\n');
fprintf(fid,'*----------------------------------------------------------------------------*\n');             
%for jj=1:nbus
   I1 = SLGICpu(:,1+ni:nbus+ni);
    for jj=1:nbus
       for kk=1:nbus 
       if kk~= jj 
          if jj < kk 
    fprintf(fid,'* %2.15s  %2.15s %10.4f   %10.3f     %10.3f    *\n',char(Bus.names(SLG.Busr(jj))) ,char(Bus.names(SLG.Busr(kk))) ,...
            abs(I1(jj,kk)),abs(I1(jj,kk)*Ibase1(kk)),rad2deg(angle(I1(jj,kk)*Ibase1(kk))) );
       end 
   end
end;
end;


ni = ni + nbus;

fprintf(fid,'==============================================================================\n'); 
fprintf(fid,'* TENSOES DE POS FALTA MONOFASICA                                            *\n');
fprintf(fid,'==============================================================================\n');
fprintf(fid,'*     BARRA          FASE    Magnitude(pu)  Magnitude(kV)   Angulo(graus)    *\n');
fprintf(fid,'*----------------------------------------------------------------------------*\n');             
for jj=1:nbus
    fprintf(fid,'* %2.15s     A     %10.4f    %10.3f        %10.3f       *\n',char(Bus.names(SLG.Busr(jj))) ,...
            abs(SLG.MagApu(nb)),abs(SLG.MagAkv(nb)),rad2deg(angle(SLG.MagAkv(nb))));
    fprintf(fid,'* %2.15s     B     %10.4f    %10.3f        %10.3f       *\n',char(Bus.names(SLG.Busr(jj))) ,...
            abs(SLG.MagBpu(nb)),abs(SLG.MagBkv(nb)),rad2deg(angle(SLG.MagBkv(nb))));
    fprintf(fid,'* %2.15s     C     %10.4f    %10.3f        %10.3f       *\n',char(Bus.names(SLG.Busr(jj))) ,...
            abs(SLG.MagCpu(nb)),abs(SLG.MagCkv(nb)),rad2deg(angle(SLG.MagCkv(nb))));
    nb = nb + 1;
end
fprintf(fid,'==============================================================================\n'); 
fprintf(fid,'* CORRENTE DE CURTO CIRCUITO BIFASICO                                        *\n');
fprintf(fid,'==============================================================================\n'); 
fprintf(fid,'*              Magnitude(pu)     Magnitude(kA)    Angulo(graus)              *\n');
fprintf(fid,'*----------------------------------------------------------------------------*\n');             
fprintf(fid,'*                %-10.4f         %-10.3f       %-10.3f              *\n',abs(Icc2pu(ii,ii)) ,...
        abs(Icc2(ii,ii)) ,rad2deg(angle(Icc2(ii,ii))));
fprintf(fid,'==============================================================================\n'); 
fprintf(fid,'* CORRENTES DE POS FALTA BIFASICA - FASE A                                   *\n');
fprintf(fid,'==============================================================================\n');
fprintf(fid,'*         BARRAS                                                             *\n');
fprintf(fid,'*   DE             PARA             Magnitude(pu) Magnitude(kA) Angulo(graus)*\n');
fprintf(fid,'*----------------------------------------------------------------------------*\n');             
%for jj=1:nbus
    I2 = LLFIApu(:,1+nf:nbus+nf);
    for jj=1:nbus
       for kk=1:nbus 
       if kk~= jj 
          if jj < kk 
    fprintf(fid,'* %2.15s  %2.15s %10.4f   %10.3f     %10.3f    *\n',char(Bus.names(LLF.Busr(jj))) ,char(Bus.names(LLF.Busr(kk))) ,...
            abs(I2(jj,kk)),abs(I2(jj,kk)*Ibase2(kk)),rad2deg(angle(I2(jj,kk)*Ibase2(kk))) );
       end 
   end
end;
end;

fprintf(fid,'==============================================================================\n'); 
fprintf(fid,'* CORRENTES DE POS FALTA BIFASICA - FASE B                                   *\n');
fprintf(fid,'==============================================================================\n');
fprintf(fid,'*         BARRAS                                                             *\n');
fprintf(fid,'*   DE             PARA             Magnitude(pu) Magnitude(kA) Angulo(graus)*\n');
fprintf(fid,'*----------------------------------------------------------------------------*\n');             
%for jj=1:nbus
    I2 = LLFIBpu(:,1+nf:nbus+nf);
    for jj=1:nbus
       for kk=1:nbus 
       if kk~= jj 
          if jj < kk 
    fprintf(fid,'* %2.15s  %2.15s %10.4f   %10.3f     %10.3f    *\n',char(Bus.names(LLF.Busr(jj))) ,char(Bus.names(LLF.Busr(kk))) ,...
            abs(I2(jj,kk)),abs(I2(jj,kk)*Ibase2(kk)),rad2deg(angle(I2(jj,kk)*Ibase2(kk))) );
       end 
   end
end;
end;
fprintf(fid,'==============================================================================\n'); 
fprintf(fid,'* CORRENTES DE POS FALTA BIFASICA - FASE C                                   *\n');
fprintf(fid,'==============================================================================\n');
fprintf(fid,'*         BARRAS                                                             *\n');
fprintf(fid,'*   DE             PARA             Magnitude(pu) Magnitude(kA) Angulo(graus)*\n');
fprintf(fid,'*----------------------------------------------------------------------------*\n');             
%for jj=1:nbus
    I2 = LLFICpu(:,1+nf:nbus+nf);
    for jj=1:nbus
       for kk=1:nbus 
       if kk~= jj 
          if jj < kk 
    fprintf(fid,'* %2.15s  %2.15s %10.4f   %10.3f     %10.3f    *\n',char(Bus.names(LLF.Busr(jj))) ,char(Bus.names(LLF.Busr(kk))) ,...
            abs(I2(jj,kk)),abs(I2(jj,kk)*Ibase2(kk)),rad2deg(angle(I2(jj,kk)*Ibase2(kk))) );
       end 
   end
end;
end;

    nf = nf + nbus;

fprintf(fid,'==============================================================================\n'); 
fprintf(fid,'* TENSOES DE POS FALTA BIFASICA                                              *\n');
fprintf(fid,'==============================================================================\n');
fprintf(fid,'*     BARRA          FASE    Magnitude(pu)  Magnitude(kV)   Angulo(graus)    *\n');
fprintf(fid,'*----------------------------------------------------------------------------*\n');             
for jj=1:nbus
    fprintf(fid,'* %2.15s     A     %10.4f    %10.3f        %10.3f       *\n',char(Bus.names(LLF.Busr(jj))) ,...
            abs(LLF.MagApu(nc)),abs(LLF.MagAkv(nc)),rad2deg(angle(LLF.MagAkv(nc))));
    fprintf(fid,'* %2.15s     B     %10.4f    %10.3f        %10.3f       *\n',char(Bus.names(LLF.Busr(jj))) ,...
            abs(LLF.MagBpu(nc)),abs(LLF.MagBkv(nc)),rad2deg(angle(LLF.MagBkv(nc))));
    fprintf(fid,'* %2.15s     C     %10.4f    %10.3f        %10.3f       *\n',char(Bus.names(LLF.Busr(jj))) ,...
           abs(LLF.MagCpu(nc)),abs(LLF.MagCkv(nc)),rad2deg(angle(LLF.MagCkv(nc))));
    nc = nc + 1;
end

fprintf(fid,'==============================================================================\n'); 
fprintf(fid,'* CORRENTE DE CURTO CIRCUITO BIFASICO PARA TERRA                             *\n');
fprintf(fid,'==============================================================================\n'); 
fprintf(fid,'*              Magnitude(pu)     Magnitude(kA)    Angulo(graus)              *\n');
fprintf(fid,'*----------------------------------------------------------------------------*\n');             
fprintf(fid,'*                %-10.4f         %-10.3f       %-10.3f              *\n',abs(Icc2gpu(ii,ii)) ,...
        abs(Icc2g(ii,ii)) ,rad2deg(angle(Icc2g(ii,ii))));
fprintf(fid,'==============================================================================\n'); 
fprintf(fid,'* CORRENTES DE POS FALTA BIFASICA PARA TERRA - FASE A                        *\n');
fprintf(fid,'==============================================================================\n');
fprintf(fid,'*         BARRAS                                                             *\n');
fprintf(fid,'*   DE             PARA             Magnitude(pu) Magnitude(kA) Angulo(graus)*\n');
fprintf(fid,'*----------------------------------------------------------------------------*\n');             
%for jj=1:nbus
    I2g = LLGIApu(:,1+nd:nbus+nd);
    for jj=1:nbus
       for kk=1:nbus 
       if kk~= jj 
          if jj < kk 
    fprintf(fid,'* %2.15s  %2.15s %10.4f   %10.3f     %10.3f    *\n',char(Bus.names(LLG.Busr(jj))) ,char(Bus.names(LLG.Busr(kk))) ,...
            abs(I2g(jj,kk)),abs(I2g(jj,kk)*Ibase2g(kk)),rad2deg(angle(I2g(jj,kk)*Ibase2g(kk))) );
       end 
   end
end;
end;

fprintf(fid,'==============================================================================\n'); 
fprintf(fid,'* CORRENTES DE POS FALTA BIFASICA PARA TERRA - FASE B                        *\n');
fprintf(fid,'==============================================================================\n');
fprintf(fid,'*         BARRAS                                                             *\n');
fprintf(fid,'*   DE             PARA             Magnitude(pu) Magnitude(kA) Angulo(graus)*\n');
fprintf(fid,'*----------------------------------------------------------------------------*\n');             
%for jj=1:nbus
    I2g = LLGIBpu(:,1+nd:nbus+nd);
    for jj=1:nbus
       for kk=1:nbus 
       if kk~= jj 
          if jj < kk 
    fprintf(fid,'* %2.15s  %2.15s %10.4f   %10.3f     %10.3f    *\n',char(Bus.names(LLG.Busr(jj))) ,char(Bus.names(LLG.Busr(kk))) ,...
            abs(I2g(jj,kk)),abs(I2g(jj,kk)*Ibase2g(kk)),rad2deg(angle(I2g(jj,kk)*Ibase2g(kk))) );
       end 
   end
end;
end;
fprintf(fid,'==============================================================================\n'); 
fprintf(fid,'* CORRENTES DE POS FALTA BIFASICA PARA TERRA - FASE C                        *\n');
fprintf(fid,'==============================================================================\n');
fprintf(fid,'*         BARRAS                                                             *\n');
fprintf(fid,'*   DE             PARA             Magnitude(pu) Magnitude(kA) Angulo(graus)*\n');
fprintf(fid,'*----------------------------------------------------------------------------*\n');             
%for jj=1:nbus
    I2g = LLGICpu(:,1+nd:nbus+nd);
    for jj=1:nbus
       for kk=1:nbus 
       if kk~= jj 
          if jj < kk 
    fprintf(fid,'* %2.15s  %2.15s %10.4f   %10.3f     %10.3f    *\n',char(Bus.names(LLG.Busr(jj))) ,char(Bus.names(LLG.Busr(kk))) ,...
            abs(I2g(jj,kk)),abs(I2g(jj,kk)*Ibase2g(kk)),rad2deg(angle(I2g(jj,kk)*Ibase2g(kk))) );
       end 
   end
end;
end;

nd = nd + nbus;
    
    
fprintf(fid,'==============================================================================\n'); 
fprintf(fid,'* TENSOES DE POS FALTA BIFASICA PARA TERRA                                   *\n');
fprintf(fid,'==============================================================================\n');
fprintf(fid,'*     BARRA          FASE    Magnitude(pu)  Magnitude(kV)   Angulo(graus)    *\n');
fprintf(fid,'*----------------------------------------------------------------------------*\n');             
for jj=1:nbus
    fprintf(fid,'* %2.15s     A     %10.4f    %10.3f        %10.3f       *\n',char(Bus.names(LLG.Busr(jj))) ,...
            abs(LLG.MagApu(ne)),abs(LLG.MagAkv(ne)),rad2deg(angle(LLG.MagAkv(ne))));
    fprintf(fid,'* %2.15s     B     %10.4f    %10.3f        %10.3f       *\n',char(Bus.names(SLG.Busr(jj))) ,...
            abs(LLG.MagBpu(ne)),abs(LLG.MagBkv(ne)),rad2deg(angle(LLG.MagBkv(ne))));
    fprintf(fid,'* %2.15s     C     %10.4f    %10.3f        %10.3f       *\n',char(Bus.names(SLG.Busr(jj))) ,...
            abs(LLG.MagCpu(ne)),abs(LLG.MagCkv(ne)),rad2deg(angle(LLG.MagCkv(ne))));
    ne = ne + 1;
end
fprintf(fid,'==============================================================================\n'); 
fprintf(fid,'##############################################################################\n'); 
end


fclose(fid);    
fprintf(1,'-GERANDO RELATORIO FINAL....OK\n');

%
% Timer final
%

t2 = clock;
t1 = (t2(1,5) - t0(1,5)) * 60 + ( t2(1,6) - t0(1,6));
fprintf(1,'-PROCESSAMENTO CONCLUIDO EM %3.4f seg\n',t1);

return
   

  





