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
    return(a+b);
}
};
class Sub:public Add
{
    int a,b;
    public:
    void input(int x,int y)
    {
        a=x;
        b=y;
    }
    int sub(){
    return (a-b);
    }
};
int main()
{
    Sub A;
    A.Add::input(10,20);
    cout<<A.add()<<endl;
    A.Sub::input(40,20);
    cout<<A.sub()<<endl;
    return 0;
}
