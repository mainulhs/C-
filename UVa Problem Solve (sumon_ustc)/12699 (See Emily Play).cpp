#include <bits/stdc++.h>
#define II ({int a; scanf("%d", &a); a;})
#define forab(i, a, b)        for (__typeof (b) i = (a) ; i <= b ; ++i)
#define For(i, n)                forab (i, 1, n)
const int MX = 1000002 ;
double dp[MX];
int vis[MX];
int d,s,a,mark;
double solve(int n ){
    if( n == 1 )return 0.0;
    double &ret = dp[n];
    if(vis[n] == mark)
        return ret;
    vis[n] = mark;
    ret = 0;
    if( n & 1 )
    {
        ret += solve(n+1)+a;
        ret += solve(n-1)+s;
        ret /= 2.;
    }
    else
    {
        ret += solve(n/2)+d;
    }
    return ret;
}

int main(){
    int t = II ;
    For(c,t){
        mark = c;
        int n = II;
        d = II,s = II,a = II;
        printf("%.3lf\n",solve(n)+a+d+s);
    }
}
