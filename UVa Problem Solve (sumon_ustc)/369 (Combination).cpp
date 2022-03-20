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
#define MAXTRI 10000
unsigned long int pas[MAXTRI][MAXTRI];
void pascals(int n)
{
register int i,j;
pas[0][0]=1;
pas[1][0]=pas[1][1]=1;
for(i=2;i<=n;i++)
{
pas[i][0]=1;
for(j=1;j<i;j++)
{
pas[i][j]= pas[i-1][j-1]+pas[i-1][j];
}
pas[i][j]=1;
}
}
main(void)
{
pascals(5000);
long int n,m;
while(scanf("%ld%ld",&n,&m)!=EOF)
{
if((n==0)&&(m==0))
break;
else{
printf("%ld things taken %ld at a time is %lu exactly.\n",n,m,pas[n][m]);
}
}
return 0;
}
