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
int main()
{
    char st[1000000];
    long int l,i,count=0;

    while(gets(st))
    {

        l=strlen(st);
        for(i=0; i<l; i++)
        {
            if(st[i]=='"')
            {
                count++;
                if(count%2==0)
                    printf("''");
                else
                    printf("``");
            }
            else
                printf("%c",st[i]);
        }

        printf("\n");
    }
    return 0;

}
