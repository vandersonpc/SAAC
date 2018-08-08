function [name,sbase,busnames,busdata,sysdata] = sysload(file)

%
%       FUNCAO: sysload.m - Le o arquivo de dados que contem as 
%                           informacaoes do sistema de potencia.
%
% Variaveis de entrada:
%
%   file    - nome do arquivo de dados.
%
% Veriaveis de saida
%
%   name    - Nome do sistema a ser calculado.
%
%   sbase   - Potencia base do sistema.
%
%   busdata - Matriz que contem as informacoes dos barramentos. 
% 
%   sysdata - Matriz que contem os dados dos componentes do sistema.
%
%
%       VERSÃO: 1.00 - 21/out/2006                                      
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


%
% Abre o arquivo
%

fid = fopen(file);
if fid==-1
    error('Arquivo nao encontrado ou erro de leitura.');
end

%
% Inicializa variaveis
%
busdata = [];
sysdata = [];
sline   = '';
loadbus = 0;
loadsys = 0;
max_lin = 0;
lnum    = 0;

while max_lin ~= 999
    sline = fgetl(fid);    
    if ~isempty(sline)        
        if strcmp(upper(sline),'END')
           break;
        end   
        if isempty(findstr(sline,'%'))
          
           %
           %Le o nomoe do sistema
           %
           
           if ~isempty(findstr(upper(sline),'NAME')) & min(findstr(upper(sline),'NAME')) == 1 
              name  = sline(1,max(findstr(sline,'=')) + 1:findstr(sline,';') - 1 ); 
           end
           
           %
           %Le a potencia base
           %
           
           if ~isempty(findstr(upper(sline),'SBASE'))
              sbase = str2num(sline(1,max(findstr(sline,'=')) + 1:findstr(sline,';') - 1 )); 
           end
           
           %
           %Le os nomes dos barramentos
           %
           
           if ~isempty(findstr(upper(sline),'BUSNAMES'))
              commaidx = findstr(sline , ',');
              equalidx = findstr(sline , '=');
              endidx   = findstr(sline , ';');
              totalidx = [ commaidx endidx ] - 1;
              startidx = [ equalidx commaidx] + 1;
              
              if ~isempty(commaidx) & ~isempty(equalidx)
                 for x=1:length(totalidx)
                     busnames{x} = sscanf(sline(startidx(x):totalidx(x)),'%s',15);                          
                 end                  
                 for x=1:length(totalidx)
                     busnames{x} = char(strhcat(busnames{x},blanks(15 - length(busnames{x}))));                      
                 end    
              end                           
           end
           
           %
           %Le as informacoes dos barramentos
           %
           
           if loadbus == 1
              if isempty(findstr(sline,';'))
                 lnum = lnum + 1; 
                 busdata(lnum,:) = str2num(sline);
              else
                 loadbus = 0;
                 lnum    = 0;
              end
           end
     
           if ~isempty(findstr(upper(sline),'BUSDATA'))
              loadbus = 1;
           end     
           
           %Le as informacoes do sistema
           
           if loadsys == 1
              if isempty(findstr(sline,';'))
                 lnum = lnum + 1; 
                 sysdata(lnum,:) = str2num(sline);
              else
                 loadsys = 0;
                 lnum    = 0;
              end
           end
     
           if ~isempty(findstr(upper(sline),'SYSDATA'))  
              loadsys = 1;
           end     
       end
  end 
max_lin = max_lin + 1;
end
fclose(fid);
return
    