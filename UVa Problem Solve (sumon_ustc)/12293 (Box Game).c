#include <stdio.h>

int main ()
{
    long long n;
    while ( scanf ("%lld", &n) && n ) {
        long long num = 1;
        while ( num < n )
        {
            num = num * 2;
            num++;
        }

        if ( num == n )
            puts("Bob");
        else
            puts("Alice");
    }

    return 0;
}
