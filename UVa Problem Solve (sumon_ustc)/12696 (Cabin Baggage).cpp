#include <stdio.h>

int main()
{
    int test;
    double len, wi, de, we,res;
    int count  = 0;
    scanf("%d", &test);
    while(test--)
    {
            double len , wi , de , we;
            scanf("%lf %lf %lf %lf",&len , &wi , &de ,&we);
            if( ( (len <= 56.00 && wi <= 45.00 && de <= 25.00 ) || ( len + wi + de <= 125.00 ) ) && we <= 7.00 )
            {
                  count++ ; puts("1");
            }
            else
                puts("0");
    }
        printf("%d\n",count);
    return 0;
}
