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
    int test;
    long long int n,c,sum,r,d;
    cin>>test;
    while (test--)
    {
        cin>>n;
        d=n;
        c=0;
        while (1)
        {
            sum=0;
            while (d>0)
            {
                r=d%10;
                sum=sum*10+r;
                d=d/10;
            }
            if (n==sum)
                break;
            else
            {
                d=sum+n;
                n=sum+n;
                c++;
            }
        }
        cout<<c<<" "<<n<<endl;
    }
    return 0;
}
