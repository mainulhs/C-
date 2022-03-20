#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int number;

    while ( scanf ("%d", &number) != EOF ) {

        if ( number == 0 )
            return 0;
        int save = number;

        int count = 0;

        if ( floor ( sqrt (number) ) == sqrt (number) )
            count--;

        int i;
        for ( i = 2; i <= sqrt (number) + 1; i++ ) {

            int flag = 0;

            while ( number % i == 0 ) {
                number /= i;
                flag = 1;
            }

            if ( flag == 1 )
                count++;
        }

        printf("%d : %d\n", save, count+1);
    }

    return 0;
}
