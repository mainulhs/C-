#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char a[100], b[100];
    while(cin>>a)
    {
        strcpy(b,a);
        strrev(b);
        if(strcmp(a,b)== 0)
        {
            cout<<"Palindrome\n";
        }
        else
            cout<<"Not Palindrome";
    }
}
