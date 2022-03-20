#include<iostream>
using namespace std;
int add(int a,int b)
{
    return (a+b);
}
int sub(int a,int b)
{
    cout<<a-b<<endl;
}
int multi(int a,int b)
{
    cout<<a*b<<endl;
}
double divi(double a,double b)
{
    cout<<a/b<<endl;
}
int main()
{
    int a,b;
    cout<<"Enter a number:";
    cin>>a>>b;
    cout<<add(a,b)<<endl;
    sub(a,b);
    multi(a,b);
    divi(a,b);
    return 0;
}
