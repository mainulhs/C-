#include <iostream>
#include <cmath>

using namespace std;

long GCD(long x , long y)
{
    while(y > 0)
    {
        x = x % y;
        x = x ^ y;
        y = y ^ x;
        x = x ^ y;

    }
    return x;
}
int main()
{
    long N,i,j;
    while(cin>>N)
    {
        long G = 0;
        for(i=1; i< N; i++)
            for(j=i+1; j <= N; j++)
            {
                G+=GCD(i,j);
            }
            cout<<G<<endl;
    }
}
