#include<stdio.h>
#include<ctype.h>
int main()
{
char c;
int asc;
printf("Press a character:\n");
c=getchar();
asc=toascii(c);
printf("The ASCII value is:\n%d",asc);
return 0;
}
