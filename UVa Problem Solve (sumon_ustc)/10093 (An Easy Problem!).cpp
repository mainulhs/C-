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
using namespace std;

int f(char x)
{
    if(x>='0'&&x<='9')return x-'0';
    if(x>='A'&&x<='Z')return x-'A'+10;
    if(x>='a'&&x<='z')return x-'a'+36;
    return 0;
}
int main()
{
    char s[1010];
    while(scanf("%s",s)!=EOF)
    {
        int len=strlen(s),i,j;
        int res=2;
        for(i=0; i<len; i++)res=std::max(res,f(s[i])+1);
        int x=0;
        for(i=0; i<len; i++)x+=f(s[i]);
        if(s[i]=='-')x=-x;
        for(; res<=62; res++)if(x%(res-1)==0)break;
        if(res==63)printf("such number is impossible!\n");
        else printf("%d\n",res);
    }
    return 0;
}
