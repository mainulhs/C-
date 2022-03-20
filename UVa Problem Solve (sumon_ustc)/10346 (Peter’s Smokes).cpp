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
int main()
{
    int n,k,s,b,tb,r;
    while(scanf("%d%d",&n,&k)==2)
    {
        s=n;
        tb=0;
        while(s>=k)
        {
            b=s/k;
            r=s%k;
            s=b+r;
            tb=tb+b;
        }
        printf("%d\n",n+tb);
    }
    return 0;
}

