#include<iostream>
using namespace std;
int main()
{
    int i,j,n,sum=0;
    cout<<"Enter a number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        sum=sum+i;
        else
        continue;
    }
    cout<<"The sum is:";
    cout<<sum;
}
