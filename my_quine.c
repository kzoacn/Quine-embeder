#include <stdio.h>
void function1() {}
void function2() {}
int main()
{
function1();FILE *file=fopen("tmp","w");
char *s="#include <stdio.h>%cvoid function1() {}%cvoid function2() {}%cint main()%c{%cfunction1();FILE *file=fopen(%ctmp%c,%cw%c);%cchar *s=%c%s%c;%cfprintf(file,s,10,10,10,10,10,34,34,34,34,10,34,s,34,10,10,10);fclose(file);function2();%c}%c";
fprintf(file,s,10,10,10,10,10,34,34,34,34,10,34,s,34,10,10,10);fclose(file);function2();
}
