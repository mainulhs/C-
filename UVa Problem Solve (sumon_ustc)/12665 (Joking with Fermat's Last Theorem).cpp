#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    long long x,y,temp;
    int caseno = 0;
    while(cin>>x>>y)
    {

        int count = 0;
        for(int i =0; i<=x;i++)
            for(int j = x; j <= y;j++)
            {
        temp = pow(x,3) + pow(y,3);
        if(temp/10 >y || temp/10 < x)
            continue;
        if(temp % 10)
        {
            count++;
        }
            }
            cout<<count<<endl;
    }

}
