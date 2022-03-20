#include <bits/stdc++.h>

int main ()
{
    int test;
    scanf ("%d", &test);

    while ( test-- )
    {
        char a [10];
        scanf ("%s", a);

        if ( strlen (a) == 5 )
            puts("3");
        else
        {
            int count = 0;

            if ( a [0] == 'o' ) count++;
            if ( a [1] == 'n' ) count++;
            if ( a [2] == 'e' ) count++;

            if ( count >= 2 )
                puts("1");
            else
                puts("2");
        }
    }

    return 0;
}
