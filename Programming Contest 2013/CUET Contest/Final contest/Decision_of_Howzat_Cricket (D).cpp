#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <iomanip>

using namespace std;

class player
{
public:
    char name[35];
} test[4];

int main()
{
    int tcase, caseno = 0,i,j;
    int l1,l2,l3,l4,l5,l6,l7,l8,l9,l10,l11,l12,l13,l14,l15,l16,l17,l18,l19,l20;
    char s1[20],s2[20],s3[20],s4[20],s5[20];
    char s6[20],s7[20],s8[20],s9[20],s10[20];
    char s11[20],s12[20],s13[20],s14[20],s15[20];
    char s16[20],s17[20],s18[20],s19[20],s20[20];
    int run[4],wick[4];
    scanf ("%d", &tcase);
    while(tcase--)
    {
        for(i=0; i<4; i++)
        {
            cin>>test[i].name;
        }
        for(i=0; i<4; i++)
        {
            run[i] = {0};
        }
        for(i=0; i<4; i++)
        {
            wick[i] = {0};
        }
        getchar();
        gets(s1);
        gets(s2);
        gets(s3);
        gets(s4);
        gets(s5);
        gets(s6);
        gets(s7);
        gets(s8);
        gets(s9);
        gets(s10);
        gets(s11);
        gets(s12);
        gets(s13);
        gets(s14);
        gets(s15);
        gets(s16);
        gets(s17);
        gets(s18);
        gets(s19);
        gets(s20);
        l1 = strlen(s1);
        l2 = strlen(s2);
        l3 = strlen(s3);
        l4 = strlen(s4);
        l5 = strlen(s5);
        l6 = strlen(s6);
        l7 = strlen(s7);
        l8 = strlen(s8);
        l9 = strlen(s9);
        l10 = strlen(s10);
        l11 = strlen(s11);
        l12 = strlen(s12);
        l13 = strlen(s13);
        l14 = strlen(s14);
        l15 = strlen(s15);
        l16 = strlen(s16);
        l17 = strlen(s17);
        l18 = strlen(s18);
        l19 = strlen(s19);
        l20 = strlen(s20);
    for(i=0; i<l1; i++)
    {
        if(s1[i] >= '1' && s1[i] <= '6')
            {
                run[0] += (s1[i] - '0');
            }
            if(s1[i] == 'W')
            {
                wick[0]++;
            }
    }
    for(i=0; i<l2; i++)
    {
        if(s2[i] >= '1' && s2[i] <= '6')
            {
                run[0] += (s2[i] - '0');
            }
            if(s2[i] == 'W')
            {
                wick[0]++;
            }
    }
    for(i=0; i<l3; i++)
    {
        if(s3[i] >= '1' && s3[i] <= '6')
            {
                run[0] += (s3[i] - '0');
            }
            if(s3[i] == 'W')
            {
                wick[0]++;
            }
    }
    for(i=0; i<l1; i++)
    {
        if(s4[i] >= '1' && s4[i] <= '6')
            {
                run[0] += (s4[i] - '0');
            }
            if(s4[i] == 'W')
            {
                wick[0]++;
            }
    }
    for(i=0; i<l5; i++)
    {
        if(s5[i] >= '1' && s5[i] <= '6')
            {
                run[0] += (s5[i] - '0');
            }
            if(s5[i] == 'W')
            {
                wick[0]++;
            }
    }
    for(i=0; i<l6; i++)
    {
        if(s6[i] >= '1' && s6[i] <= '6')
            {
                run[1] += (s6[i] - '0');
            }
            if(s6[i] == 'W')
            {
                wick[1]++;
            }
    }
    for(i=0; i<l7; i++)
    {
        if(s7[i] >= '1' && s7[i] <= '6')
            {
                run[1] += (s7[i] - '0');
            }
            if(s7[i] == 'W')
            {
                wick[1]++;
            }
    }
    for(i=0; i<l8; i++)
    {
        if(s8[i] >= '1' && s8[i] <= '6')
            {
                run[1] += (s8[i] - '0');
            }
            if(s8[i] == 'W')
            {
                wick[1]++;
            }
    }
    for(i=0; i<l9; i++)
    {
        if(s9[i] >= '1' && s9[i] <= '6')
            {
                run[1] += (s9[i] - '0');
            }
            if(s9[i] == 'W')
            {
                wick[1]++;
            }
    }
    for(i=0; i<l10; i++)
    {
        if(s10[i] >= '1' && s10[i] <= '6')
            {
                run[1] += (s10[i] - '0');
            }
            if(s10[i] == 'W')
            {
                wick[1]++;
            }
    }
    for(i=0; i<l11; i++)
    {
        if(s11[i] >= '1' && s11[i] <= '6')
            {
                run[2] += (s11[i] - '0');
            }
            if(s11[i] == 'W')
            {
                wick[2]++;
            }
    }
    for(i=0; i<l12; i++)
    {
        if(s12[i] >= '1' && s12[i] <= '6')
            {
                run[2] += (s12[i] - '0');
            }
            if(s12[i] == 'W')
            {
                wick[2]++;
            }
    }
    for(i=0; i<l13; i++)
    {
        if(s13[i] >= '1' && s13[i] <= '6')
            {
                run[2] += (s13[i] - '0');
            }
            if(s13[i] == 'W')
            {
                wick[2]++;
            }
    }
    for(i=0; i<l14; i++)
    {
        if(s14[i] >= '1' && s14[i] <= '6')
            {
                run[2] += (s14[i] - '0');
            }
            if(s14[i] == 'W')
            {
                wick[2]++;
            }
    }
    for(i=0; i<l15; i++)
    {
        if(s15[i] >= '1' && s15[i] <= '6')
            {
                run[2] += (s15[i] - '0');
            }
            if(s15[i] == 'W')
            {
                wick[2]++;
            }
    }
    for(i=0; i<l16; i++)
    {
        if(s16[i] >= '1' && s16[i] <= '6')
            {
                run[3] += (s16[i] - '0');
            }
            if(s16[i] == 'W')
            {
                wick[3]++;
            }
    }
    for(i=0; i<l17; i++)
    {
        if(s17[i] >= '1' && s17[i] <= '6')
            {
                run[3] += (s17[i] - '0');
            }
            if(s17[i] == 'W')
            {
                wick[3]++;
            }
    }
    for(i=0; i<l18; i++)
    {
        if(s18[i] >= '1' && s18[i] <= '6')
            {
                run[3] += (s18[i] - '0');
            }
            if(s18[i] == 'W')
            {
                wick[3]++;
            }
    }
    for(i=0; i<l19; i++)
    {
        if(s19[i] >= '1' && s19[i] <= '6')
            {

                run[3] += (s19[i] - '0');
            }
            if(s19[i] == 'W')
            {
                wick[3]++;
            }
    }
    for(i=0; i<l20; i++)
    {
        if(s20[i] >= '1' && s20[i] <= '6')
            {
                run[3] += (s20[i] - '0');
            }
            if(s20[i] == 'W')
            {
                wick[3]++;
            }
    }
    int m,n;
    char tt[35];
    for(m=0; m<4; m++)
    {
        for(n=0; n<4; n++)
            {
                if(run[m] > run[n])
                {
                    strcpy(tt, test[m].name);
                    strcpy(test[m].name, test[n].name);
                    strcpy(test[n].name, tt);
                    run[m] ^= run[n];
                    run[n] ^= run[m];
                    run[m] ^= run[n];

                    wick[m] ^= wick[n];
                    wick[n] ^= wick[m];
                    wick[m] ^= wick[n];
                }
                if(run[m] == run[n])
                {
                    if(wick[m] < wick[n])
                    {
                        strcpy(tt, test[m].name);
                        strcpy(test[m].name, test[n].name);
                        strcpy(test[n].name, tt);
                        run[m] ^= run[n];
                        run[n] ^= run[m];
                        run[m] ^= run[n];

                        wick[m] ^= wick[n];
                        wick[n] ^= wick[m];
                        wick[m] ^= wick[n];

                    }
                }
            }
        }
    for(i=0; i<4; i++)
    {
    cout<<test[i].name<<" "<<run[i]<<"-"<<wick[i]<<endl;
    }

  }
    return 0;
}

