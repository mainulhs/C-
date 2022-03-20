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
    int count,mod,n;
    while(scanf("%d",&n)==1)
    {
        mod = count = 0;
        do
        {
            mod = (mod*10 + 1)%n;
            count++;
        }
        while(mod!=0);
        printf("%d\n",count);
    }
    return 0;
}
