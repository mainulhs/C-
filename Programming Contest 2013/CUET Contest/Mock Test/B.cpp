#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    int tcase, caseno = 0;
    int len, len1, len2, spc1, spc2, spc3, spc4, i, j, k, l , m, n;
    char in[30];
    char team1[12], team2[12], pro[12];
    int t1, t2, r1, r2;
    scanf("%d", &tcase);
    getchar();
    while(tcase--)
    {
        spc1 = 0; spc2 = 0; spc3 = 0; spc4 = 0;
        m = 0; n = 0;
        gets(in);
        len = strlen(in);
        for(i = 0; i < len; i++)
        {
            if((in[i] >= '0' && in[i] <= '9') && in[i-1] == ' ' && spc1 == 0)
            {
                spc1 = i;
            }
        }
        cout<<spc1<<endl;
    }
    return 0;
}
