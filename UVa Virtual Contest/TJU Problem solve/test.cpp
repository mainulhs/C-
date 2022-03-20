#include <iostream>
#include <cmath>

using namespace std;

long GCD(long i , long j)
{
    long temp;
    while(i != 0)
    {
        temp = j % i;
        j = i;
        i = temp;
    }
    return j;
}
int main()
{
    long long N,i,j;
    while(cin>>N)
    {
        long G = 0;
        if(N == 0)
            break;
        for(i=1; i<N; i++)
            for(j=i+1; j<=N; j++)
            {
                G+=GCD(i,j);
            }
            cout<<G<<endl;
    }
}
