#include <stdio.h>

int main()
{
    int t,tcase=0;
    scanf("%d", &t);
    while(t--)
    {
        float C,D;
        scanf("%f%f", &D, &C);
        printf("Case %d: %0.2f\n",++tcase, ((5.0/9.0)*C + D));
    }
    return 0;
}
