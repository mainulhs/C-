#include<stdio.h>
int main()
{
    int n,i,factorial=1,a,b;
    scanf("%d",&b);
    for(a=0; a<b; a++)
    {
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            factorial=factorial*i;
        }
        printf("%d\n",factorial);
    }
    return 0;
}

