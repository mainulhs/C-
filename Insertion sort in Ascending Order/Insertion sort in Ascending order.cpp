#include<iostream>
using namespace std;
int main()

{
    int a[20],x,i,n,j;
    cout<<"Enter the Dimension:"<<endl;
    cin>>n;
    cout<<"Enter the value:";
    cin>>x;
    i=0;
    while(i<n)
    {
        j=i-1;
        while(x<a[j] && j>=0)
        {
            a[j+1]=a[j];
            --j;
        }
        a[j+1]=x;
        if(i!=n-1)
        {
           cout<<"Enter value:";
           cout<<x;
        }
    }
}
