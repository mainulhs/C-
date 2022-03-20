#include<iostream>
using namespace std;
void merge(int c[],int r);
int main()
{
    int a[10],b[10],c[20];
    int x,y,i,j=0;
    cout<<"Enter the Dimension for array a:";
    cin>>x;
    cout<<"Enter the Dimension for array b:";
    cin>>y;
    cout<<"Enter values:"<<x<<":";
    for(i=0;i<x;i++)
    cin>>a[i];
     cout<<"Enter values:"<<y<<":";
    for(i=0;i<y;i++)
    cin>>b[i];
    for(i=0;i<x;i++)
    c[i]=a[i];
    while(j<y)
    c[i++]=b[j++];
    merge(c,x+y);
}
void merge(int c[],int r)
{
    int d[20],fl,fu,sl,su,p,q,k,size;
    size=1;
    while(size<r)
    {
        fl=0;
        k=0;
        while(fl+size<r)
        {
            sl=fl+size;
            fu=sl-1;
            su=(sl+size-1<r)?sl+size-1:r-1;
            for(p=fl,q=sl;p<=fu&&q<=su;k++)
            {
                if(c[p]<=c[q])
                d[k]=c[p++];
                else
                d[k]=c[q++];
            }
            for(;p<=fu;k++)
            d[k]=c[p++];
            for(;q<=su;k++)
            d[k]=c[q++];
            fl=su+1;

        }
        for(p=fl;k<r;p++)
        d[k++]=c[p];
        for(p=0;p<r;p++)
        c[p]=d[p];
        size*=2;
    }
    cout<<"\n";
    for(q=0;q<r;q++)
    cout<<c[q]<<"\t";
}
