#include<iostream>
using namespace std;
class Float{
float a;
public:
Float(float x):a(x){}
Float operator +(Float &p)
{
    Float temp;
    temp.a=a+p.a;
    return temp;
}
Float operator -(Float &p)
{
    Float temp;
    temp.a=a-p.a;
    return temp;
}
Float operator *(Float &p)
{
    Float temp;
    temp.a=a*p.a;
    return temp;
}
Float operator /(Float &p)
{
    Float temp;
    temp.a=a/p.a;
    return temp;
}
void display()
{
    cout<<a;
}
Float(){}
~Float(){}
};
int main()
{
    Float a(2.5),b(2.5),c;
    c=a+b;
    a.display();
    cout<<"+";
    b.display();
    cout<<"=";
    c.display();
    cout<<endl;
    c=a-b;
    a.display();
    cout<<"-";
    b.display();
    cout<<"=";
    c.display();
    cout<<endl;
    c=a*b;
    a.display();
    cout<<"*";
    b.display();
    cout<<"=";
    c.display();
    cout<<endl;
    c=a/b;
    a.display();
    cout<<"/";
    b.display();
    cout<<"=";
    c.display();
    cout<<endl;
    return 0;
}
