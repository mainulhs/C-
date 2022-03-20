#include<iostream>
#include<cstring>
using namespace std;
class String{
char str[100];
public:
String(){}
~String(){}
String(char *a)
{
    strcpy(str,a);
}
bool operator ==(String &s)
{
    if(strcmp(str,s.str)==0)
    return true;
    else
    return false;
}
bool operator < (String &s)
{
    if(strcmp(str,s.str) < 0)
    return true;
    else
    return false;
}
bool operator > (String &s)
{
    if(strcmp(str,s.str) > 0)
    return true;
    else
    return false;
}
};
int main()
{
    String s1("USTC"),s2("ustc"),s3("UITS");
    if (s1==s2)
    cout<<"String are equal"<<endl;
    else
    cout<<"String are not equal"<<endl;
    if(s1==s3)
    cout<<"String are equal"<<endl;
    else
    cout<<"String are not equall"<<endl;
    if (s1<s2)
    cout<<"s1 is less then s2"<<endl;
    else
    cout<<"s1 is greater then s2"<<endl;
    if(s1<s3)
    cout<<"s1 is less then s3"<<endl;
    else
    cout<<"s1 is greater then s3"<<endl;
       if (s1>s2)
    cout<<"s1 is greater then s2"<<endl;
    else
    cout<<"s1 is less then s2"<<endl;
    if(s1>s3)
    cout<<"s1 is greater then s3"<<endl;
    else
    cout<<"s1 is less then s3"<<endl;
    return 0;
}
