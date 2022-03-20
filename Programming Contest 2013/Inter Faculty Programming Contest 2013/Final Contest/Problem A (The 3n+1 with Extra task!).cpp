#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int main ()
{
    int i, j;

    while ( scanf ("%d %d", &i, &j) == 2 )
    {
        int a = i;
        int b= j;
        double res;
        if ( i > j )
        {
            swap (i, j);
        }
        int max_length = 0;
        int cycle_length;
        while ( i <= j )
        {
            int n = i;
            cycle_length = 1;

            while ( n != 1 )
            {
                if ( n % 2 == 1 )
                    n = 3 * n + 1;
                else
                    n = n / 2;
                    cycle_length++;
            }

            if ( cycle_length > max_length )
            {
                max_length = cycle_length;
            }

            i++;
        }
        cout<<a<<" "<<b<<" "<<max_length<<endl;
        res=(double)(a+b+max_length)/3;
        cout<<fixed<<setprecision(2)<<res<<endl;
    }

    return 0;
}
