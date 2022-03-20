#include<stdio.h>
int main()
{
    long int n,m,a;
    while(scanf("%ld %ld",&n,&m)!=EOF)
    {
       a=m*n-1;
       printf("%ld\n",&a);
    }
    return 0;
}
