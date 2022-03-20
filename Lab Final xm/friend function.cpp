#include<iostream>
using namespace std;
class test
{
    int a,b;
    public:
    test(int x,int y)
    {
        a=x;
        b=y;
    }
    friend void display_mean(test s);
};
void display_mean(test s)
{
    cout<<float(s.a+s.b)/2.0<<endl;
}
int main()
{
    test a(10,20),b(30,40);
    display_mean(a);
    display_mean(b);
    return 0;
}
