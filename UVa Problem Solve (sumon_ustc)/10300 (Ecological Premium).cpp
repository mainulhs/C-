#include <iostream>
using namespace std;
int main()
{
    long test,a,b,c,n,res,i,j;
    while(cin>>test)
    {
        for(i=0;i<test;i++)
        {
            res=0;
            cin>>n;
            for(j=0;j<n;j++)
            {
                cin>>a>>b>>c;
                res+=(a*c);
            }
            cout<<res<<endl;
        }
    }
    return 0;
}
