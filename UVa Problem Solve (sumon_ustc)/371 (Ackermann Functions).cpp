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
    long long
    i,a,b,count,sum,p,q,val,flag,temp;
    while(scanf("%lld %lld",&a,&b)
            && (a && b))
    {
        flag = 0;
        if(a>b)
        {
            b = b^a;
            a = b^a;
            b = b^a;
        }
        for(i=a; i<=b; i++)
        {
            val = i;
            count=0;
            while(1)
            {
                if((val%2))
                    val = val*3+1;
                else val /= 2;
                count++;
                if(val==1) break;
            }
            if(flag==0)
            {
                p = count;
                q = count;
            }
            flag = 1;
            q = count;
            if(p < q)
            {
                p = q;
                sum = i;
            }
        }
        if(a==b) sum = a;
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,sum,p);
    }
    return 0;
}
