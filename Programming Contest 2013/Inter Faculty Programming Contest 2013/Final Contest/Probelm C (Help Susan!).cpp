#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    long long num, dec, base, rem;
    while(cin>>num)
    {
        dec=0; base=1;
        while(num > 0)
        {
            rem = num%10;
            dec = dec + (rem * base);
            num = num / 10;
            base = base * 2;
        }
        cout<<dec<<endl;
    }
    return 0;
}
