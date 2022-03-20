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
unsigned long findmin();
unsigned long temp[3];
int main()
{
    unsigned long store[3];
    unsigned long result[1500];
    int i,j,n;
    unsigned long receive;
    result[1]=1;
    for(i=0; i<3; i++)
        store[i]=1;
    for(i=2; i<=1500; i++)
    {
        temp[0]=result[store[0]]*2;
        temp[1]=result[store[1]]*3;
        temp[2]=result[store[2]]*5;

        receive=findmin();
        for(j=0; j<3; j++)
            if(temp[j]==receive)
                store[j]++;
        result[i]=receive;
    }

    printf("The 1500'th ugly number is %lu.\n",result[1500]);

    return 0;
}
unsigned long findmin()
{
    int i,j;
    unsigned long min=temp[0];
    for(i=1; i<3; i++)
        if(min>temp[i])
            min=temp[i];
    return min;
}

