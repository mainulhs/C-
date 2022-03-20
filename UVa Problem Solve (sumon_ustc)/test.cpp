#include <iostream>

using namespace std;
int main()
{
    int m,n,k;
    while(cin>>m,n,k)
    {
        int count = 0;
        if(m ==0 && n == 0 && k == 0)
        {
            break;
        }
        for(int i = 0; i < m ;i++)
        {
        for(int j = 0; j < n; j++)
        {
        for(int l = 0; l < k; k++)
        {
            count ++;
        }
    }
    }
        cout<<count;
    }
}
