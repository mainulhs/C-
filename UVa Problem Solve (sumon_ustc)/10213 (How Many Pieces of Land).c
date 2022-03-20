#include <stdio.h>
int main()
{
    int n, t, F;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        F = n*(n-1)/2;
        printf("%d\n", F);
    }
    return 0;
}

