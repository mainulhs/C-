#include <cstdio>
using namespace std;

int main ()
{
    int PNO;
    int month [15];
    int r [15];
    int Case = 0;

    while ( scanf ("%d", &PNO) == 1 )
    {

        if ( PNO < 0 )
            return 0;

        month [0] = PNO;

        int i;
        for ( i = 1; i < 13; i++ )
            scanf ("%d", &month[i]);

        for ( i = 0; i < 12; i++ )
            scanf ("%d", &r[i]);

        printf ("Case %d:\n", ++Case);

        for ( i = 0; i < 12; i++ )
        {

            if ( PNO >= r[i] )
            {
                PNO -= r[i];
                printf ("No problem! :D\n");
            }

            else
                printf ("No problem. :(\n");

            PNO += month[i + 1];
        }
    }

    return 0;
}
