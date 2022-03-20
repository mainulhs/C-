#include<iostream>
using namespace std;
class test{
int a;
public:
void input(int b)
{
    a=b;
}
void display(){
cout<<a;

}
void operator -(test &b){
a=a-b.a;
}
};
int main()
{
    test a,b,c;
    a.input(5),b.input(10);
    a.display();
    cout<<"-";
    b.display();
    cout<<"=";
    a-b;
    a.display();
    cout<<endl;
    return 0;
}
