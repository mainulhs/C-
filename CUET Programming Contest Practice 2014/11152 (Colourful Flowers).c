#include <stdio.h>
#include <math.h>
#define PI acos(-1.0)
int main()
{
    double a, b, c, s, v;
    double as, av, ar, rs,rr, ds;

    while(scanf("%lf%lf%lf", &a, &b, &c) == 3)
    {
        s = (a+b+c)/2;
        v = sqrt(s * (s-a) * (s-b) * (s-c));

        ds = (a*b*c) / (v*2);
        rs = ds/2;
        as = (PI * rs *rs) - v;

        rr = (v/s);
        ar = (PI * rr *rr);

        av = (v- ar);
        printf("%0.4lf %0.4lf %0.4lf\n", as, av, ar);
    }
    return 0;
}
