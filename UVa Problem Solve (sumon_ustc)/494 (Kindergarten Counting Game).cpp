//Mainul Hassan
//Department of CSE
//FSET,USTC
//UVa Id: sumon_ustc
#include<iostream>
#include<cstdio>
#include<cstring>
#include<iomanip>
#include<algorithm>
using namespace std;
int main()
{
    int i,c,w;
    char a[1000];
    while(gets(a))
    {
        c=0;
        w=1;
        for(i=0;a[i];i++)
        {
            if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
            {
                if(w)
                c++;
                w=0;
            }
            else
            w=1;
        }
        printf("%d\n",c);
    }
    return 0;
}
