#include<iostream>
using namespace std;
int n,b[10];
void qsort(int,int);
int main()
{
    int i,l,r;
    cout<<"Enter no. of elements:";
    cin>>n;
    cout<<"\nEnter the element:"<<endl;
    for(i=0;i<n;i++)
    cin>>b[i];
    cout<<"\nElements of array:"<<endl;
    for(i=0;i<n;i++)
    cout<<b[i]<<"\t";
    l=0;
    r=n-1;
    qsort(l,r);
    cout<<"After quick sort:"<<endl;
    for(i=0;i<n;i++)
    cout<<b[i]<<"\t";
}
void qsort(int left,int right)
{
    int i,j,p,temp;
    if (right>left)
    {
        i=left;
        j=right;
        p=b[left];
        while(right<left)
        {
            do
            {
                i++;
            }
            while((b[i]<=p) && (i<=right));
            while(b[j]>=p && j>left)
            {
             --j;
            }
            if(j>i)
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;

            }
        }
        temp=b[left];
        b[left]=b[j];
        b[j]=temp;
        qsort(left,j-1);
        qsort(i,right);
    }
}
