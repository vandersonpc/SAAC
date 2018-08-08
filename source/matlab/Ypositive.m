function Yp=Ypositive(nbus,x,y,z)

%
%    FUNCAO: Ypositive.m - Gera a matrix de admitancia para sequencia
%                          positiva e negativa.  
%
%
% Variaveis de entrada:
%
%   nbus    - Numero de barramentos do sistema
%  
%   x       - Barramento inicial    
%
%   y       - Barramento final
%
%   z       - Impedancia em pu
%
%
% Veriaveis de saida
%
%   Yp    - Matriz de admitancia de sequewncia positiva ou negativa.
%
%
%       VERSÃO: 1.20 - 21/out/2006                                      
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
   

nbr=length(x);
Yp=zeros(nbus);

if x == y 
   for i=1:length(x)
       Yp(x(i),x(i))=Yp(x(i),x(i))+(1/z(i));
   end
else
   for i=1:nbr
       Yp(x(i),x(i))=Yp(x(i),x(i))+1/z(i);
       Yp(y(i),y(i))=Yp(y(i),y(i))+1/z(i);
       Yp(x(i),y(i))=Yp(x(i),y(i))+(-1)*1/z(i);
       Yp(y(i),x(i))=Yp(y(i),x(i))+(-1)*1/z(i);
   end
end
Yp = (Yp);

