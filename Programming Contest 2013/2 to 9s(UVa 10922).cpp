#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    long int i,n,sum,right,count,l;
    char x[1000];

    while(scanf("%s",x))
    {
        if(strcmp(x,"0")==0)
            break;

        right=0;
        l=strlen(x);
        n=0;
        count=1;
        for(i=0; i<l; i++)
            n=n+x[i]-'0';

        if(n%9==0)
            right=1;
        if(right==1 && n>9)
        {
            while(1)
            {
                sum=0;
                while(n>0)
                {

                    sum=sum+n%10;
                    n=n/10;
                }
                n=sum;
                count++;
                if(n>=1 && n<=9)
                    break;
            }
        }

        if(right==1)
            printf("%s is a Multiple of 9 and has 9-degree %ld.\n",x,count);
        else
            printf("%s is not a Multiple of 9.\n",x);
    }

    return 0;
}

