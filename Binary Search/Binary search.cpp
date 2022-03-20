#include<iostream>
using namespace std;
int main()
{
    int data[100],n,p,k,x,high,low,mid;
    cout<<"Code Written By::Mainul Hassan\n\n";
    cout<<"\t\t     ::::A Simple program for Binary Search::::\n\n";
    cout<<"How many number you enter:\n";
    cin>>n;
    cout<<"Enter the number:\n";
    for(int i=0;i<n;i++)
    cin>>data[i];
    cout<<"\nElements of array a:"<<endl;
    for(int i=0;i<n;i++)
    cout<<data[i]<<"\t";
    for(int i=0;i<n;i++)
    {
        p=0;
        while(p<n-i)
        {
            if(data[p]>data[p+1])
            {
                k=data[p];
                data[p]=data[p+1];
                data[p+1]=k;

            }
            p++;
        }
    }
cout<<"\nSorted number:\n";
for(int i=0;i<n;i++)
cout<<data[i]<<"\t";
cout<<"\nEnter the value to be search:"<<endl;
    cin>>x;
    low=0;
    high=n;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(x<data[mid])
        high=mid-1;
        else if(x>data[mid])
        low=mid+1;
        else if(x==data[mid])
        {
            cout<<x<<" is located at location :"<<mid+1<<endl;
            break;
        }
    }
    return 0;
}

