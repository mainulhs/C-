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
    long long n,a,b;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        a=sqrt(n);
        b=a*a;
        if(b==n)
            printf("yes\n");
        else
            printf("no\n");
    }
    return(0);
}

