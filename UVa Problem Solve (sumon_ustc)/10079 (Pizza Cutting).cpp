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
    long int n,sum,i;

    while(scanf("%ld",&n)==1)
    {
        if(n<0)
            break;
        if(n%2!=0)
            sum=((n+1)/2)*n+1;
        else
            sum=(n/2)*(n+1)+1;

        printf("%ld\n",sum);

    }
    return 0;
}
