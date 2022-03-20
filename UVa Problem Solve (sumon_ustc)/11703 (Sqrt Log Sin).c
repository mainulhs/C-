#include<stdio.h>
#include<math.h>

#define max 1000000
long array[max];

int calculate()
{
    long a, b, c, i;
    double d, x, p;
    array[0] = 1;
    i = 1;
    for(i = 1; i <= max; i++)
    {
        x=i;
        x-=sqrt(i);
        a=x;
        b=log(i);
        p=sin(i);
        d=p*p*i;
        c=d;
        array[i] = (array[a] + array[b] + array[c]) % max;
    }
}
int main()
{
    long n;
    calculate();
    while(scanf("%ld", &n)==1)
    {
        if(n < 0)
            break;
        printf("%ld\n", array[n]);
    }
    return 0;
}

