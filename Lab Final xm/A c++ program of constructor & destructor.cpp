#include<iostream>
#include<cstring>
using namespace std;
class test{
char name[20];
int roll;
public:
test(char *str,int a)
{
    strcpy(name,str);
    roll=a;

}
~test(){cout<<name<<" "<<roll<<"Destroying..."<<endl;}
void display()
{
    cout<<name<<endl;
    cout<<roll<<endl;
}
test(){}
test(char *str)
{
strcpy(name,str);
cin>>roll;
}
};
int main()
{
    test a("Sumon",1),b("Sany",2),c;
    a.display(),b.display();
    {
        test d("Tully");
        d.display();
    }
    c=a;
    c.display();
    return 0;
}
