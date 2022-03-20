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
    int l,i;
    char s[1000];
    while(gets(s))
    {
        l=strlen(s);
        for(i=0; i<l; i++)
            printf("%c",s[i]-7);
        printf("\n");
    }
    return 0;
}
