//Mainul Hassan
//Department of CSE
//FSET,USTC
//UVa Id: sumon_ustc
#include<iostream>
#include<cstdio>
#include<cstring>
#include<iomanip>
#include<algorithm>
#include<cmath>
using namespace std;
int main ()
{
    char a [150];
    while ( gets(a) )
    {
        int i =0;
        while ( a[i] != 0 )
        {
            int frq = 0;
            while( a [i] >= '0'&& a [i] <= '9')
                frq += (a [i++]- '0' );
            for( int j = 0; j < frq; j++ )
            {
                if ( a [i] == 'b' )
                    printf ( " " );
                else
                    printf ( "%c" ,a [i]);
            }
            if (a [i] == '!' )
                printf ( "\n" );
            i++;
        }
        printf ("\n" );
    }
    return 0;
}
