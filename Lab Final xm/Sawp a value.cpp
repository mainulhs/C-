#include<iostream>
using  namespace std;
void swap(int &i,int &j)
{
    int temp=i;
    i=j;
    j=temp;
}
int main()
{
    int i,j;
    cout<<"Enter two number:";
    cin>>i>>j;
    cout<<i<<"   "<<j<<endl;
    swap(i,j);
    cout<<i<<"   "<<j<<endl;
    return 0;
}
