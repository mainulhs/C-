#include<iostream>
using namespace std;

class sort
{
public:
 void input();
 void mergesort(double *,int );
 void merge(double*,int,double*,int,double*,int);
 void output();
};

int n;
double *array;
void sort::input()
{
 cout<<”Enter the no of elements to be sorted ::”;
 cin>>n;
 cout<<”Now enter "<<n<<” elements :";
 array=new double[n];
 for(int i=0;i<n;i++)
  cin>>array[i];
}

void sort::mergesort(double *arr,int n)
{
 if(n>1)
 {
  // copy the first half to array B
  double *B;
  B=new double[n/2];
  for(int i=0;i<n/2;i++)
   B[i]=arr[i];

  // copy the second half to array C
  double *C;
  C=new double[n-n/2];
  for(int j=0;i<n;i++,j++)
   C[j]=arr[i];

  // sort them separately
  mergesort(B,n/2);
  mergesort(C,n-n/2);

  // merge the two sorted arrays
  merge(B,n/2,C,n-n/2,arr,n);
 }
}

void sort::merge(double *a,int p,double *b,int q,
     double *c,int n)
{
 int i,j,k;
 i=j=k=0;
 while(i<p && j<q)
 {
  if(a[i]<=b[j])
   c[k]=a[i],i++;
  else
   c[k]=b[j],j++;
  k++;
 }
 if(i==p)
 {
  // copy the remaing part in array 2
  while(j<q)
   c[k]=b[j],j++,k++;
 }
 else
 {
  // copy the remaing part in array 1
  while(i<p)
   c[k]=a[i],i++,k++;
 }
}

void sort::output()
{
 cout<<”The sorted list is ::\n”;
 for(int i=0;i<n;i++)
  cout<<array[i]<<’\t’;
 cout<<endl;
}

void main()
{
 sort s;
 cout<<”*************************************”;
 cout<<”\nThis program is to sort \n”
  <<”the given numbers in increasing order \n”
  <<”using merge sort algorithm (recursion)\n”;
 cout<<”*************************************\n”;
 s.input();
 s.mergesort(array,n);
 s.output();
}
