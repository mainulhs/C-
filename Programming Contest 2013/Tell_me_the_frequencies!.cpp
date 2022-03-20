#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int i,l,p[10000],j,x[10000],count,sum=0;;
    char st[10000];

    while(cin>>st)
    {
        l=strlen(st);
        for(i=0; i<l; i++)
            p[i]=(int)st[i];

        for(i=0; i<=130; i++)
        {
            count=0;
            for(j=0; j<l; j++)
            {
                if(i==p[j])
                    count++;
            }
            x[i]=count;
        }
        if(sum>0)
            cout<<endl;

        for(i=1; i<=1001; i++)
        {
            for(j=130; j>=0; j--)
            {
                if(x[j]==i)
                    cout<<j<<" "<<i<<endl;
            }
        }
        sum++;

    }
    return 0;
}


