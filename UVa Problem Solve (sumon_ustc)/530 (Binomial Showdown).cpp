//Mainul Hassan
//Department of CSE
//FSET,USTC
//UVa Id: sumon_ustc
#include<iostream>
#include<cstdio>
#include<cstring>
#include<iomanip>
#include<algorithm>
#include<cstdio>
#include<algorithm>
using namespace std;
double peprmutaion(int n,int r);
double peprmutaion(int n,int r)
{
    int i,k;
    double num;
    if(r==0)
        return 1;
    k=min(r,n-r);
    num=1;
    for(i=k; i>=1; i--)
    {
        num=num*(n-i+1);
        num=num/i;
    }
    return num;
}
int main()
{
    int n,r;
    double g;
    while(scanf("%d%d",&n,&r)==2)
    {
        g = peprmutaion(n,r);
        printf("%.0lf\n",g);

    }
    return 0;
}
