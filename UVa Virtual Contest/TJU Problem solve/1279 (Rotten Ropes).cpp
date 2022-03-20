#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int t,n,ans;
    int c[1000];
    cin>>t;

    for(int a = 1; a <= t; a++)
    {
        cin>>n;

        for(int i=0; i<n; i++)
        {
            cin>>c[i];
        }
        sort(c,c+n);

        ans=-1;

        for(int i = n-1; i >= 0; i--)
            ans=max(ans,c[i]*(n-i));

        cout<<ans<<endl;
    }

    return 0;
}
