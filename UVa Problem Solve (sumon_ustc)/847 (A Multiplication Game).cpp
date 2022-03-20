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
    long double n;
    int i;
    while(cin>>n)
    {
        for(i = 1; ; i++)
        {
            if(i % 2 == 1)
                n /= 9;
            else
                n /= 2;
            if(n <= 1)
                break;
        }
        if(i % 2 == 0)
        printf("Ollie wins.\n");
        else
        printf("Stan wins.\n");
    }
    return 0;
}
