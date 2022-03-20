#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test,a,b,c,caseno = 0;
    double res, e,f,g, r,r1;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%d%d", &a, &b, &c);
        e = (a*a);
        f= (b*b);
        g = (c*c);
        r = (2 * (e * c));
        r1 = (e+f+g);
        res = r/r1;
        printf("Case %d: %0.8f\n", ++caseno,res);
    }
    return 0;
}
