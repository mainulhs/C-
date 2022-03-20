#include<iostream>
using namespace std;
class Add{
int a,b;
public:
void input(int x,int y)
{
    a=x;
    b=y;
}
int add()
{
    return (a+b);
}
int ret_a(){return a;}
int ret_b() {return b;}
};
class Sub:public Add
{
public:
    int sub()
    {return ret_a() - ret_b();
}
};
class Multi:public Sub
{
public:
    int multi()
    {return ret_a() * ret_b();
}
};
class Divi:public Multi
{
public:
    double divi()
    {return (double) ret_a() / ret_b();
}
};
int main()
{
    Divi A;
    A.input(10,20);
    cout<<A.add()<<endl;
    cout<<A.sub()<<endl;
    cout<<A.multi()<<endl;
    cout<<A.divi()<<endl;
    return 0;
}

