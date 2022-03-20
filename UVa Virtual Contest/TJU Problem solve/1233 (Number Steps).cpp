#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int tcas, x, y, n;
    scanf("%d", &tcas);
    while(tcas--)
    {
        scanf("%d %d", &x, &y);
        if(x == y)
        {
            if((x%2==0)&&(y%2==0))
            {
                n=x+y;
                printf("%d\n", n);
            }
            else if((x%2==1)&&(y%2==1))
            {
                n=(x+y)-1;
                printf("%d\n", n);
            }
            else
            {
                printf("No Numbers\n");
            }
        }
        else if(x != y)
        {
            if((x%2==0) && (y == x-2))
            {
                n=x+y;
                printf("%d\n", n);
            }
            else if((x%2==1) && (y == x-2))
            {
                n=(x+y)-1;
                printf("%d\n", n);
            }
            else
            {
                printf("No Number\n");
            }
        }

    }
    return 0;
}
