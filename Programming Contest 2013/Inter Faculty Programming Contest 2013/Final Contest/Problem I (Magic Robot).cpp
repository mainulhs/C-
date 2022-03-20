//Magic Robot
//Problem Setter: Sukanta Sir
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int tcase, x, y, l, m, xc, yc;
    long long n, i, nx[32770], ny[32770];
    char ch;
    scanf("%d", &tcase);
    while(tcase--)
    {
        printf("The initial position of the robot is: ");
        scanf("%d %d", &x, &y);
        printf("Number of blocked cells: ");
        scanf("%lld", &n);
        for(i = 0; i < n; i++)
        {
            scanf("%d %d", &nx[i], &ny[i]);
        }
        l = x; m = y; xc = 0; yc = 0;
        while(cin>>ch)
        {
            if(ch == 'S')
            {
                break;
            }
            else
            {
                if(ch == 'U')
                {
                    l += 1;
                }
                if(ch == 'D')
                {
                    l -= 1;
                }
                if(ch == 'L')
                {
                    m -= 1;
                }
                if(ch == 'R')
                {
                    m += 1;
                }
            }
        }
        int ll = 0, mm = 0;
        //Comparing current postion with blocked cells
        for(i = 0; i < n; i++)
        {
            if(l == nx[i])
            {
                xc++;
                ll = nx[i];
            }
            if(m == ny[i])
            {
                yc++;
                mm = ny[i];
            }
        }
        if((x == l && y == m) || (ll == l && mm == m))
        {
            printf("Sorry I am not able to reach in the position (%d, %d)\n", l, m);
        }
        else
        {
            printf("Yes sir. I am here in the position (%d, %d)\n", l, m);
        }
    }
    return 0;
}

