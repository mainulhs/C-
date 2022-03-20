#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    long long t,tcase=0,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; ; i++)
            if(pow (2 , i) > n)
                break;
        cout<<"Case "<<++tcase<<": "<<i<<endl;
    }
    return 0;
}
