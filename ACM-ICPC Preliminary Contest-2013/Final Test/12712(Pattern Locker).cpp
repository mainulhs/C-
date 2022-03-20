#include <bits/stdc++.h>
int main()
{
    const long long M = 1e13 + 7;
    int test, caseno = 0, l, m, n, i, j;
    scanf("%d", &test);
    while (test--)
    {
        scanf("%d%d%d", &l, &m, &n);
        l *= l;
        long long ret = 0, prev = 1;
        for(i = 1; i <= m; i++)
        {
            prev *= (l - i+1);
            prev %= M;
        }
        for(i = m; i <= n; i++)
        {
            ret += prev;
            ret %= M;
            prev = prev * (l - i);
            prev %= M;
        }
        printf("Case %d: %lld\n",++caseno,ret);
    }
    return 0;
}
