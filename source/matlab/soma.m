function soma(finput, fout, a, metodo, Vibus)

a = str2num(a);
metodo = str2num(metodo);
Vibus = str2num(Vibus);
d = a * subt(metodo,Vibus);

finput = [finput,'.dat'];
fprintf(1,[finput, ' - ' , fout,' Resultado %2.3f'],d);


return