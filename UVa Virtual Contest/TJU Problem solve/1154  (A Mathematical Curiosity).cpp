#include <iostream>
using namespace std;
int main()
{
    int a, b, n, m, tcase = 0, count;
    while(cin>>n>>m)
    {
        if(n==0&&m==0)
            break;
        count=0;
        for(a = 1; a < n; a++)
        {
            for(b = 1; b < n; b++)
            {
                if(((a*a+b*b+m)%(a*b))==0)
                {
                    ++count;
                    if(a==b)
                        count=count-1;
                }
            }
        }
        cout<<"Case "<<++tcase<<": "<<count/2<<endl;
    }

    return 0;
}
