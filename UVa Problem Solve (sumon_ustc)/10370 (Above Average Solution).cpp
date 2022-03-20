//Mainul Hassan
//Department of CSE
//FSET,USTC
//UVa Id: sumon_ustc
#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
int a[1020],i,j,n,sum,test,b,avr;
float ans;
while(scanf("%d",&test)==1)
{
for(j=0;j<test;j++)
    {
    b=0;
    sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        sum=sum+a[i];
    avr=sum/n;
    for(i=0;i<n;i++)
        if(a[i]>avr)
            b=b+1;
    ans=((float)b/(float)n);
    printf("%.3f%%\n",ans*100);
    }
}
return 0;
}
