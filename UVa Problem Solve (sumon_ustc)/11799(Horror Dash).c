#include <stdio.h>

int main()
{
    int test,caseno =0;
    scanf("%d", &test);
    while(test--)
    {
        int n,c,max = 0,i;
        scanf("%d", &n);
        for(i = 0; i < n; i++)
        {
            scanf("%d",&c);
            if(c > max)
                max = c;
        }
        printf("Case %d: %d\n", ++caseno, max);
    }
    return 0;
}
