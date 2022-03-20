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
double a,b,c,r,s;
while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
    if(a==0 || b==0 || c==0)
    printf("The radius of the round table is: 0.000\n");
    else
        {
        s=(a+b+c)/2;
        r=(s-a)*(s-b)*(s-c)/s;
        r=sqrt(r);
        printf("The radius of the round table is: %.3lf\n",r);
        }
    }
}
