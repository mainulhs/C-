#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main()
{
    int tcase, caseno = 0, i;
    int dd, yy, mmm, l;
    char mm[5], in[11];
    scanf("%d", &tcase);
    getchar();
	while(tcase--)
	{
		gets(in);
		dd = 0; yy = 0; l = 0;
		for(i = 0; i < 2; i++)
        {
            dd = (dd * 10) + (in[i] - '0');
        }
        for(i = 3; i < 6; i++)
        {
            mm[l++] = in[i];
        }
        mm[l] = '\0';
        for(i = 7; i < 11; i++)
        {
            yy = (yy * 10) + (in[i] - '0');
        }
        if(!strcmp(mm, "JAN"))
        {
            mmm = 1;
        }
        else if(!strcmp(mm, "FEB"))
        {
            mmm = 2;
        }
        else if(!strcmp(mm, "MAR"))
        {
            mmm = 3;
        }
        else if(!strcmp(mm, "APR"))
        {
            mmm = 4;
        }
        else if(!strcmp(mm, "MAY"))
        {
            mmm = 5;
        }
        else if(!strcmp(mm, "JUN"))
        {
            mmm = 6;
        }
        else if(!strcmp(mm, "JUL"))
        {
            mmm = 7;
        }
        else if(!strcmp(mm, "AUG"))
        {
            mmm = 8;
        }
        else if(!strcmp(mm, "SEP"))
        {
            mmm = 9;
        }
        else if(!strcmp(mm, "OCT"))
        {
            mmm = 10;
        }
        else if(!strcmp(mm, "NOV"))
        {
            mmm = 11;
        }
        else if(!strcmp(mm, "DEC"))
        {
            mmm = 12;
        }
        int dfor[14] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if((yy % 4 == 0 && yy % 100 != 0) || (yy % 400 == 0))
        {
            dfor[2] = {29};
        }
        int ldate = 0;
        for(i = 0; i < mmm; i++)
        {
            ldate += dfor[i];
        }
        ldate = ldate + dd;
        if(ldate <= 300)
        {
            printf("Case %d: %d Hundreds\n", ++caseno, ldate);
        }
        else if(ldate > 300 && ldate <= 360)
        {
            ldate = ldate - 300;
            printf("Case %d: %d Tens\n", ++caseno, ldate);
        }
        else if(ldate > 360)
        {
            ldate = ldate - 360;
            printf("Case %d: %d Ones\n", ++caseno, ldate);
        }
	}
	return 0;
}
