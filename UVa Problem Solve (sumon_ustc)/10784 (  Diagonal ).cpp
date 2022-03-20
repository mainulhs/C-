#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long ans, n,k=1;
    double d;
    while(cin>>n && n)
    {
        d = (3.0 + sqrt( 9.0 + (n*8.0)))/2.0;
        ans=d;
        if(ans!=d)
            ans++;
        cout<<"Case "<<k++<<": "<<ans<<endl;
    }

return 0;
}

