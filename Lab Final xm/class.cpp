#include<iostream>
#include<cstring>
using namespace std;
class Student
{
    char name[20];
    int roll;
    public:
    void getdata(char *str,int a);
    void display();
};
void Student::getdata(char *str,int a)
{
    strcpy(name,str);
    roll=a;
}
void Student::display()
{
    cout<<name<<endl;
    cout<<roll;
}
int main()
{
    Student obj;
    obj.getdata("Sumon",11010112);
    obj.display();
    return 0;
}
