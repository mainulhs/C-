#include<iostream>
using namespace std;
class test
{
    int a;
    public:
    test(int x):a(x){}
    test operator/(test &p)
    {
        test temp;
        temp.a=a/p.a;
        return temp;
    }
    void display()
    {
        cout<<a;
    }
    test(){}
    ~test(){}
};
int main()
{
    test a(2.5),b(2.5),c;
    c=a/b;
    a.display();
    cout<<"/";
    b.display();
    cout<<"=";
    c.display();
    return 0;
}
