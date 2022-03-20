#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int test,n,a;
    cin>>test;
    while(test--)
    {
        cin>>n;
        a=n;
        while( n >= 3 )
        {
            a=a+(n/3);
            n=(n/3)+(n%3);
        }
        if(n==3)
        {
            a++;
        }
        cout<<a<<endl;
    }
return 0;
}
