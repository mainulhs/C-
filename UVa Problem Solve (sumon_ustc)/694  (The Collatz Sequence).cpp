#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long a,l,b,i,caseno=0;

    while(cin>>a>>l)
    {
        if(a < 0 && l < 0)
            break;
        b=a;
        for(i=1; i!=0 ; i++)
        {
            if(a == 1)
                break;
            if(a % 2 == 0)
            {
                a = a / 2;
            }
            else
                a = 3 * a + 1;
            if(a > l)
                break;
        }
            cout<<"Case "<<++caseno<<":"<<" A = "<<b<<","<<" limit = "<<l<<","<<" number of terms = "<<i<<"\n";
    }
    return 0;
}
