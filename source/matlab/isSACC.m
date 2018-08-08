function [is_sacc] = isSACC(file)

%       FUNCAO: isSACC.M - Verifica se o arquivo de dados e um       
%                          arquivo SACC valido. 
%
% Variaveis de entrada:
%
%   file    - Nome do arquivo
%  
% Veriaveis de saida
%
%   is_sacc - Assume os seguintes valores->  -1 = Nao e um arquivo SACC 
%                                             1 = E um arquivo SACC 
%
%       VERSÃO: 1.00 - 21/out/2006                                      
%                                                       
% 
%  ESTE PROGRAMA E PARTE DO:
%
%  SACC - SISTEMA DE CALCULO DE CURTO CIRCUITO EM SISTEMA DE POTENCIA
%
%
%  POR:                                                                    
%                 Vanderson Pimenta Carvalho 
%                 Rogerio Fernandes de Sales  
%                 Julio Cesar Silva de Oliveira         
%


%
% Inicializa variaveis
%

max_line = 0;
is_sacc  = -1;

%
% Abre o arquivo
%

fid = fopen(file);
if fid==-1
    error('Arquivo nao encontrado ou erro de leitura.');
end

while max_line ~= 99
    sline = fgetl(fid);    
    if ~isempty(sline)        
        if strcmp(upper(sline),'SACC')
           is_sacc = 1; 
           fclose(fid);
           break;
        else
           is_sacc = -1;
           fclose(fid);
           break;
        end   
    end
    max_line = max_line + 1;
end
return