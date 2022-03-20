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
    long long a[60],i,n;
    while(cin>>n)
    {
        if(n==0)
        break;
        a[0]=0;
        a[1]=1;
        for(i=2;i<=n+1;i++)
        a[i]=a[i-1]+a[i-2];
        cout<<a[n+1]<<endl;
    }
    return 0;
}
