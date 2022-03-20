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
    long long n,sum;
    while (cin>>n)
   {
    sum=((n*(n+2))/2)*3-6;
    cout<<sum<<endl;
   }
return 0;
}
