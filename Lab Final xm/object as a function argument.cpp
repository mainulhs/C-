#include<iostream>
using namespace std;
class test{
int a;
public:
void input(int b)
{
 a=b;
}
void display()
{
    cout<<a;

}
void add(test c,test d)
{
    a=c.a+d.a;
}
};
int main()
{
    test a,b,c;
    a.input(5),b.input(10);
    c.add(a,b);
    a.display();
    cout<<"+";
    b.display();
    cout<<"=";
    c.display();
    cout<<endl;
    return 0;
}
