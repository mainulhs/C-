#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"Enter a number:";
    cin>>n;
    for (i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"The sum is:";
    cout<<sum;
    return 0;
}
