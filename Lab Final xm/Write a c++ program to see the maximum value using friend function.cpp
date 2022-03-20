#include<iostream>
using namespace std;
class B;
class A
{
    int a;
    public:
    A(int x):a(x){}
    friend void max(A,B);
};
class B
{
    int b;
    public:
    B(int y):b(y){}
    friend void max(A,B);
};
void max(A obj1,B obj2)
{
    if (obj1.a>obj2.b)
    cout<<obj1.a<<endl;
    else
    cout<<obj2.b<<endl;
}
int main()
{
    A a(10);
    B b(20);
    max(a,b);
    return 0;
}
