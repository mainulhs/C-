#include <bits/stdc++.h>
using namespace std;
const long M = 1000000007 ;
long BigMod(long b , long p )
{
    long ret = 1 ;
    while(p)
    {
        if(p&1) ret = (ret * b ) % M ;
        p >>= (1ll) , b = (b*b)% M ;
    }
    return ret ;
}
long solve(long depth , long node )
{
    if( depth == 0 ) return 1 ;
    if( depth == 1 ) return ( node + 1 ) % M ;
    if( node == 1 ) return -1 ;
// ( v * ( ( v - 1 ) ^ d - 1 ) / ( v - 2 ) ) + 1
    long ans = node * ( BigMod(node-1,depth) - 1 ) ;
    ans %= M ;
    ans *= BigMod(node-2,M-2);
    ans = ( ans + 1 + M ) % M ;
    return ans ;
}
int main()
{
    int T, caseno =0;
    cin>>T;
    while(T--)
    {
        long d , v ;
        cin>>d;
        cin>>v;
        long long Ans = solve(d,v);
        printf("Case %d: %lld\n",++caseno,Ans);
    }
}
