#include<iostream>
using namespace std;
int main()
{
    int a,b,c,test,caseno=0;
    cin>>test;
    while(test--)
    {
        cin>>a>>b>>c;
        if(a<=20 && b<=20 && c<=20)
        {
            cout<<"Case "<<++caseno<<": "<<"good\n";
        }
        else
            cout<<"Case "<<++caseno<<": "<<"bad\n";
    }
    return 0;
}
