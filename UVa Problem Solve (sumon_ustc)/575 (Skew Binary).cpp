//Mainul Hassan
//Department of CSE
//FSET,USTC
//UVa Id: sumon_ustc
#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <algorithm>
#include <cmath>
int main()
{
    long int l,i,s,c;
    char a[100];
    while(scanf("%s",&a))
    {
        s=0;
        l=strlen(a);
        for(i=0; i<l; i++)
        {
            c=a[i]-'0';
            s+=c*(pow(2,l-i)-1);
        }
        if(s==0)
            break;
        printf("%ld\n",s);
    }
    return 0;
}

