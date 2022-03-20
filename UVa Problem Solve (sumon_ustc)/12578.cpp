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
#define PI acos(-1.0)
using namespace std;

int main()
{
    int tc;
    double l,w,r,ar,ac;
    cin>>tc;
    while(tc--)
    {
        cin>>l;
        w=l*6/10;
        r=l/5;
        ac=PI*r*r;
        printf("%.2lf %.2lf\n", ac, l*w-ac);
    }
    return 0;
}
