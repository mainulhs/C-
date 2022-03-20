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
#define M 1000
int num[M];
int main()
{
    int n,i,j,k,t,counter;
    scanf("%d",&t);
    while(t--)
    {
        counter=0;
        scanf("%d",&n);
        for(i=0; i<n; i++)
            scanf("%d",&num[i]);
        for(i=0; i<n-1; i++)
        {
            k=0;
            for(j=0; j<n-i-1; j++)
                if(num[j]>num[j+1])
                {
                    k++;
                    num[j]=(num[j]^=num[j+1])^(num[j+1]^=num[j]);
                }
            if(!k)break;
            counter+=k;
        }
        printf("Optimal train swapping takes %d swaps.\n",counter);
    }
    return 0;
}
