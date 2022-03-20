#include<iostream>
using namespace std;
int main()
{
    int i,j,n,sum=0;
    cout<<"Enter the value:"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"The sum is:"<<endl;
    cout<<sum;
}
