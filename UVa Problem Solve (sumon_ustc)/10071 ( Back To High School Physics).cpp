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
    int v,t;
    while(cin>>v>>t)
    {
        if(v==0 && t==0)
        cout<<"0\n";
        else
        cout<<2*v*t<<endl;
    }
    return 0;
}

