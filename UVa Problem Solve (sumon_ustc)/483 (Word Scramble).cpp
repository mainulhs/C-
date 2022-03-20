//Mainul Hassan
//Department of CSE
//FSET,USTC
//UVa Id: sumon_ustc
#include<iostream>
#include<cstdio>
#include<cstring>
#include<iomanip>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
char inp[1000],c;
int i;
while ( scanf("%s",inp)!=EOF )
{
c=getchar();
for( i=strlen(inp)-1; i>=0; i-- )
{
printf("%c",inp[i]);
}
putchar(c);
}
return 0;
}
