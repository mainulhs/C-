#include <stdio.h>
#include <math.h>
long GCD(long i , long j)
{
    long temp;
    while(i != 0)
    {
        temp = i% j;
        j = i;
        i = temp;
    }
    return j;
}

int main()
{
    long long G;
    int N,i,j,test;
    scanf("%ld", &test);
    while(test--)
    {
        scanf("%ld",&N);
        long G = 0;
        for(i = 1; i < N; i++)
            for(j=(i+1); j<=N; j++)
            {
                G += GCD(i,j);
            }
            printf("%lld\n",GCD(i,j)/2);
    }
    return 0;
}

