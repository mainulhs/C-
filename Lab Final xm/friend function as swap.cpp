#include<iostream>
using namespace std;
class B;
class A
{
    int a;
    public:
    A(int x):a(x){}
    friend void swap (A&,B&);
    friend void display(A,B);

};
class B
{
    int b;
    public:
    B(int y):b(y) {}
    friend void swap (A&, B&);
    friend void display(A,B);

};
void swap(A &obj1,B &obj2)
{
     A temp(obj1.a);
    obj1.a=obj2.b;
    obj2.b=temp.a;
}
void display(A s ,B ss)
{
    cout <<s.a<<' '<<ss.b<<endl;
}
int main()
{
    A a(10);
    B b(20);
    display(a,b);
    swap(a,b);
    display(a,b);
    return 0;
}
