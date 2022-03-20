#include <iostream>
#include <cmath>
using namespace std;
int GCD(int i , int j)
{
    int temp;
    while(i != 0)
    {
        temp = i% j;
        j = i;
        i = temp;
    }
    return j;
}

int main()
{
    int N,i,j;
    int test;
    cin>>test;
    while(test--)
    {
        cin>>N;
        long long G = 0;
        for(i=1; i<N; i++)
            for(j=(i+1); j<=N; j++)
            {
                G+=GCD(i,j);
            }
            cout<<GCD(i,j)/2<<endl;
    }
    return 0;
}

