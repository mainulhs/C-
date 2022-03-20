#include <bits/stdc++.h>
using namespace std;
//{ Loops
#define forab(i,a,b) for (__typeof(b) i = (a); i <= (b); ++i)
#define rep(i,n) forab (i, 0, (n) - 1)
#define For(i,n) forab (i, 1, n)
#define rofba(i,a,b) for (__typeof(b) i = (b); i >= (a); --i)
#define per(i,n) rofba (i, 0, (n) - 1)
#define rof(i,n) rofba (i, 1, n)
#define forstl(i,s) for (__typeof ((s).end ()) i = (s).begin (); i != (s).end (); ++i)
//}
//{ Floating-points
#define EPS 1e-7
#define abs(x) (((x) < 0) ? - (x) : (x))
#define zero(x) (abs (x) < EPS)
#define equal(a,b) (zero ((a) - (b)))
#define PI 2*acos (0.0)
//}
typedef long long int64;
typedef unsigned long long int64u;
#define memo(a,v) memset(a,v,sizeof(a))
#define all(a) a.begin(),a.end()
#define db double
#define pb push_back
#define pii pair<int ,int >
#define NL puts("")
//{
//Intput_Output
#define II ({ int a; scanf("%d",&a); a;})
#define IL ({ int64 a; scanf("%lld",&a); a;})
#define ID ({ db a; scanf("%lf",&a); a;})
#define IC ({ char a; scanf("%c",&a); a;})
#define IS ({ string a; cin >> a; a;})
#define ICA(n) ({ char a[n]; scanf("%s",&a); a;})
#define OC printf("Case %d:",cs);

const int INF = 1<<29;
const int mx = 2e5 + 7;
const int mod = 1000000007 ;
const db pi = PI;
int EQ(double d)
{
    if ( fabs(d) < EPS ) return 0;
    return d > EPS ? 1 : -1 ;
}
int arr[mx],A[mx],L1[mx];
int n;
int LIS()
{
    vector<int>temp;
    temp.push_back(-INF);
    rep(i,n) temp.push_back(INF);
    int lis = 0 ;
    rep(i,n)
    {
        int low = lower_bound(temp.begin(),temp.end(),A[i])- temp.begin();
        temp[ low ] = A[ i ] ;
        lis = max(lis,low);
        L1[i] = lis ;
    }
    return lis;
}
int main()
{
#ifdef Sanim
    freopen ("in.txt", "r", stdin);
// freopen ("output.txt", "w", stdout);
#endif
    int t = II;
    For(cs,t)
    {
        n = II;
        rep(i,n)
        {
            int x = II;
            arr[x] = i;
        }
        rep(i,n)
        {
            int x = II;
            A[i] = arr[x];
        }
        OC;
        int ans = n-LIS();
        ans *= 2;
        cout << " " << ans << endl;
    }
}
