#include<iostream>
#include<cstring>
using namespace std;
class student{
char name[20];
int roll;
public:
void getdata(char *str,int a);
void display();
};
void student::getdata(char *str,int a)
{
    strcpy(name,str);
    roll=a;
}
void student::display()
{
    cout<<name<<endl;
    cout<<roll<<endl;
}
int main()
{
    student obj;
    obj.getdata("Mainul Hassan",11010112);
    obj.display();
    return 0;
}
