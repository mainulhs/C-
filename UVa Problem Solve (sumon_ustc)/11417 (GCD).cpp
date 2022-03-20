#include <iostream>
#include <cmath>

using namespace std;

int GCD(int i , int j)
{
    int temp;
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
    int N,i,j;
    while(cin>>N)
    {
        long G = 0;
        if(N == 0)
            break;
        for(i=1; i<N; i++)
            for(j=i+1; j >= N; j++)
            {
                G+=GCD(i,j);
            }
            cout<<G<<endl;
    }
}
