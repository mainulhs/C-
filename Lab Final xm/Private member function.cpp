#include<iostream>
using namespace std;
class test{
int a;
public:
void input()
{
    cin>>a;
}
void display()
{
    input();
    cout<<a;
}
};
int main()
{
    test obj;
    obj.display();
    return 0;
}
