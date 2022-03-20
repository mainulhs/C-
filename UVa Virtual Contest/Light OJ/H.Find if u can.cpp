#include <iostream>
#include<cstdio>
#include<cmath>
using namespace std;


int main()
{
    int i, j;
    int n;
    int m=0, p=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&j);
        if(j==0)
        {
            p++;
        }
        else
        {
            m++;
        }
    }
    m/=9;
    if(m==0)
    {
        if(p>0)
        {
            p=1;
        }
    }
    if(p>0)
    {
        while(m--)
        {
            printf("555555555");
        }
        while(p--)
        {
            printf("0");
        }
        printf("\n");
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}

