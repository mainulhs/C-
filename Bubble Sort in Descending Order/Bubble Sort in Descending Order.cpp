#include<iostream>
using namespace std;
int main()
{
    int a[20],i,p,t,n;
    cout<<"Enter the Dimension:"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"Enter a["<<n<<"]value:";
        cin>>a[i];
    }
    cout<<"\nElements of array a:"<<endl;
    for(i=1;i<=n;i++)
    cout<<a[i]<<"\t";
    for(i=1;i<=n;i++)
    {
        p=1;
       while(p<=n-i)
       {
            if(a[p]<a[p+1])
            {
                t=a[p];
                a[p]=a[p+1];
                a[p+1]=t;
            }
        }
        p++;
    }
    cout<<"\nAfter bubble Sort:\n";
    for(i=1;i<=n;i++)
    cout<<a[i]<<"\t";
    cout<<endl;
    return 0;
}
