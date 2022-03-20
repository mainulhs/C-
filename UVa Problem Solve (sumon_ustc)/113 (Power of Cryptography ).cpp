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
using namespace std;
int main()
{
    double n,p;
    double k;
    while(scanf("%lf%lf",&n,&p)==2)
    {
        k=pow(p,1/n);
        cout<<k<<endl;
    }
    return 0;
}

