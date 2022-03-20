#include <bits/stdc++.h>

int main()
{
    int a , b , c ;
    while( scanf("%d %d %d",&a,&b,&c) == 3 )
    {
        int Zero = 0 , One = 0 ;
        a == 0 ? Zero++ : One++;
        b == 0 ? Zero++ : One++;
        c == 0 ? Zero++ : One++;
        if( One == 3 || Zero == 3 ) puts("*");
        else
        {
            if( One > Zero )
            {
                if(a == 0 ) puts("A");
                else if(b == 0 ) puts("B");
                else puts("C");
            }
            else
            {
                if(a == 1 ) puts("A");
                else if(b == 1 ) puts("B");
                else puts("C");
            }
        }
    }
    return 0;
}
