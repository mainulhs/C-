#include <stdio.h>
int main()
{
    int a, b, c, d, l, i, res;
    while(scanf("%d %d %d %d %d", &a, &b, &c, &d, &l) == 5)
    {
        if(a == 0 && b == 0 && c == 0 && d ==0 && l == 0)
        {
            break;
        }
        int count = 0;
        for(i = 0; i <= l; i++)
        {
            res =( (a * (i * i)) + (b * i) + c);
            if(res % d == 0)
                count++;
        }
        printf("%d\n",count);

    }
    return 0;
}
