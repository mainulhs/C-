#include<iostream>
using namespace std;
class test{
int a,b,c;
public:
test(int x,int y,int z):a(x),b(y),c(z){}
void operator-(void)
{
    a=-a;
    b=-b;
    c=-c;
}
void display()
{
    cout<<a<<' '<<b<<' '<<c<<endl;
}
};
int main()
{
    test t(1,2,3);
    t.display();
    -t;
    t.display();
    -t;
    t.display();
    return 0;
}
