#include<iostream>
using namespace std;
int add(int a=10,int b=20)
{
    return (a+b);
cout<<endl;
}
int main()
{
    cout<<add()<<endl<<add(30,40)<<endl
    <<add(30)<<endl;
    return 0;
}
