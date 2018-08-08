function error = compiler(file)

%eval(['mcc -m -h -v -O all -B link:exe ',file]);

eval(['mcc -m -h -v -O all -B sgl ',file]);
return