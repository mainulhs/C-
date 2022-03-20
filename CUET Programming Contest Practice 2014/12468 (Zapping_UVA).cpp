#include <bits/stdc++.h>
int main()
{
    int a,b, c, c1, c2;
    while(scanf("%d%d", &a, &b) == 2)
    {
        if(a == -1 && b == -1)
        {
            break;
        }

        if(a >= b)
        {
            c1 = ((100-a) + b);
            c2 = (a - b);
            if(c1 > c2)
            {
                c = c2;
            }
            else
            {
                c = c1;
            }
        }
        if(a < b)
        {
            c1 = ((100-b) + a);
            c2 = (b-a);
            if(c1 > c2)
            {
                c = c2;
            }
            else
            {
                c = c1;
            }
        }
        printf("%d\n", c);
    }
    return 0;
}
