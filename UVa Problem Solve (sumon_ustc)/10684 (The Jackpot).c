#include <stdio.h>
#define MX 100010

int main()
{
    int tmp, mx, n, x, i;
    while(scanf("%d", &n) && n)
    {
        mx = tmp = 0;
        for(i = 0; i < n; i++)
        {
            scanf("%d", &x);
            tmp += x;
            if(tmp < 0)
                tmp=0;
            mx = max(mx, tmp);
        }
        if(mx)
            printf("The maximum winning streak is %d.\n",mx);
        else
            printf("Losing streak.\n");
    }
    return 0;
}
