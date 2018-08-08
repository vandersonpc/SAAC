function Yz=Yzero(nbus,x,y,z,dtype)

%
%    FUNCAO: Yzero.m - Gera a matrix de admitancia para sequencia
%                      zero.  
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
%   dtype   - Tipo de dispositivo conforme abaixo
%
%                  Para Trafo:    0 - Estrela Aterrado/Estrela Aterrado 
%        	                      1 - Estrela Aterrado/Estrela
%              	                  2 - Estrela Aterrado/Delta 
%                                 3 - Estrela/Estrela Aterrado;
%                                 4 - Estrela/Estrela;
%	                              5 - Estrela/Delta;
%       	                      6 - Delta/Estrela Aterrado;
%                                 7 - Delta/Estrela;
%                           	  8 - Delta/Delta; 
%
%
%                  Para carga:    0 - Estrela;
%             	                  1 - Estrela Aterrado
%
%
% Veriaveis de saida
%
%   Yz    - Matriz de admitancia de sequewncia zero.
%
%
%       VERSÃO: 1.30 - 26/out/2006                                      
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

tol = 1e-10;
nbr=length(x);
Yz=zeros(nbus);

if x == y 
   for i=1:length(x)
      if dtype == 1
         Yz(x(i),x(i))=Yz(x(i),x(i)) +  (1/z(i)); 
      else
         Yz(x(i),x(i))=Yz(x(i),x(i)) + tol;  
      end   
   end
else
   
   for i=1:length(x)
    if dtype(i)==0 %Estrela aterrado/estrela Aterrado
        Yz(x(i),x(i))=Yz(x(i),x(i)) + 1/z(i);
        Yz(y(i),y(i))=Yz(y(i),y(i)) + 1/z(i);
        Yz(x(i),y(i))=Yz(x(i),y(i)) + (-1)*1/z(i);
        Yz(y(i),x(i))=Yz(y(i),x(i)) + (-1)*1/z(i);
    end
    
    if  dtype(i)==1 %Estrela aterrado/estrela
        Yz(x(i),x(i))=Yz(x(i),x(i)) + tol;
        Yz(y(i),y(i))=Yz(y(i),y(i)) + tol;
        Yz(x(i),y(i))=Yz(x(i),y(i)) + tol;
        Yz(y(i),x(i))=Yz(y(i),x(i)) + tol;
    end
    
    if  dtype(i)==2 %Estrela aterrado/delta
        Yz(x(i),x(i))=Yz(x(i),x(i)) + 1/z(i);
        Yz(y(i),y(i))=Yz(y(i),y(i)) + tol;
        Yz(x(i),y(i))=Yz(x(i),y(i)) + tol;
        Yz(y(i),x(i))=Yz(y(i),x(i)) + tol;
    end
    
    if  dtype(i)==3 %estrela/estrela aterrado
        Yz(x(i),x(i))=Yz(x(i),x(i)) + tol;
        Yz(y(i),y(i))=Yz(y(i),y(i)) + tol;
        Yz(x(i),y(i))=Yz(x(i),y(i)) + tol;
        Yz(y(i),x(i))=Yz(y(i),x(i)) + tol;
    end
    
    if  dtype(i)==4 %Estrela/estrela
        Yz(x(i),x(i))=Yz(x(i),x(i)) + tol;
        Yz(y(i),y(i))=Yz(y(i),y(i)) + tol;
        Yz(x(i),y(i))=Yz(x(i),y(i)) + tol;
        Yz(y(i),x(i))=Yz(y(i),x(i)) + tol;
    end
    
    if  dtype(i)==5 %Estrela/delta
        Yz(x(i),x(i))=Yz(x(i),x(i)) + tol;
        Yz(y(i),y(i))=Yz(y(i),y(i)) + tol;
        Yz(x(i),y(i))=Yz(x(i),y(i)) + tol;
        Yz(y(i),x(i))=Yz(y(i),x(i)) + tol;
    end
    
    if  dtype(i)==6 %Delta/estrela aterrado
        Yz(x(i),x(i))=Yz(x(i),x(i)) + tol;
        Yz(y(i),y(i))=Yz(y(i),y(i)) + tol;
        Yz(x(i),y(i))=Yz(x(i),y(i)) + tol;
        Yz(y(i),y(i))=Yz(y(i),y(i)) + 1/z(i);
    end
    
    if  dtype(i)==7 %Delta/Estrela
        Yz(x(i),x(i))=Yz(x(i),x(i)) + tol;
        Yz(y(i),y(i))=Yz(y(i),y(i)) + tol;
        Yz(x(i),y(i))=Yz(x(i),y(i)) + tol;
        Yz(y(i),x(i))=Yz(y(i),x(i)) + tol;
    end
    
    if  dtype(i)==8 %Delta/Delta
        Yz(x(i),x(i))=Yz(x(i),x(i)) + tol;
        Yz(y(i),y(i))=Yz(y(i),y(i)) + tol;
        Yz(x(i),y(i))=Yz(x(i),y(i)) + tol;
        Yz(y(i),x(i))=Yz(y(i),x(i)) + tol;
    end
end
end
Yz = (Yz);

