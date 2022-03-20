#include<iostream>
using namespace std;
int main()
{
    int a[20],i,p,t,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
        p=1;
       while(p<=n-i)
       {
            if(a[p]>a[p+1])
            {
                t=a[p];
                a[p]=a[p+1];
                a[p+1]=t;
            }
        }
        p++;
    }
    cout<<endl;
    for(i=1;i<=n;i++)
    cout<<a[i]<<"\t";
    return 0;
}

