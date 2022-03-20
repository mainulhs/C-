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
int cycle(long int i);
int main()
{
    long int i,a,b,x,z;
    int max,y,m,logic=1,res;



    while(scanf("%ld%ld",&a,&b)==2)
    {
        max=1;


        if(a>b)
        {
            x=a;
            z=b;
        }
        else
        {
            x=b;
            z=a;
        }

        for(i=z; i<=x; i++)
        {
            y=cycle(i);
            if(y>max)
                max=y;
        }

        printf("%ld",a);
        printf(" %ld",b);
        printf(" %d\n",max);
        res=(a+b+max)/3;
        cout<<res;
    }
    return 0;
}


int cycle(long int i)
{
    int count=1;
    long int l;

    for(l=1; i>1; l++)
    {
        if(i%2==0)
            i>>=1;
        else
            i=3*i+1;
        count++;
    }

    return (count);
}

