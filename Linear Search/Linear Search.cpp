#include<iostream>
using namespace std;
int main()
{
    int a[20],d,i,j,k,x;
    cout<<"Code Written By::Mainul Hassan\n\n";
    cout<<"\t\t     ::::A Simple program for Bubble Sort::::\n\n";
    cout<<"Enter the dimension:\n";
    cin>>d;
    cout<<"Enter "<<d<<" values:\n";
    for(int i=0;i<d;i++)
    cin>>a[i];
    cout<<"\nElements of array a:"<<endl;
    for(int i=0;i<d;i++)
    cout<<a[i]<<"\t";
    for(int i=0;i<d;i++)
    {
        j=1;
        while(j<=d-i)
        {
            if(a[j]>a[j+1])
            {
                k=a[j];
                a[j]=a[j+1];
                a[j+1]=k;

            }
            j++;
        }
    }
cout<<"\nSorted number:\n";
for(int i=0;i<d;i++)
cout<<a[i]<<"\t";
cout<<"\nEnter the value to be search:"<<endl;
    cin>>x;
    for(int i=0;i<d;i++)
    {
        if(x==a[i])
        cout<<"\n"<<x<< "is located at location"<<i+1;
          else if(i=d)
        cout<<"\n the element is not found";
    }

}



