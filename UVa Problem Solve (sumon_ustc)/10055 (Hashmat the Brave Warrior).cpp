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
    long long int x,y,z;

    while(cin>>x>>y)
    {
        if(x>y)
            z=x-y;
        else
            z=y-x;
        cout<<z<<endl;
    }
    return 0;
}
