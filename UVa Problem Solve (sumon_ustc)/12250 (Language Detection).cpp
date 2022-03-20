#include <iostream>
using namespace std;
int main()
{
    long tcase = 0;
    string s;
    while(cin>>s)
    {
        if(s == "#")
            break;
        else if(s == "HELLO")
            cout<<"Case "<<++tcase<<": ENGLISH\n";
        else if(s == "HOLA")
            cout<<"Case "<<++tcase<<": SPANISH\n";
        else if(s == "HALLO")
            cout<<"Case "<<++tcase<<": GERMAN\n";
        else if(s == "BONJOUR")
            cout<<"Case "<<++tcase<<": FRENCH\n";
        else if(s == "CIAO")
            cout<<"Case "<<++tcase<<": ITALIAN\n";
        else if(s == "ZDRAVSTVUJTE")
            cout<<"Case "<<++tcase<<": RUSSIAN\n";
            else
            cout<<"Case "<<++tcase<<": UNKNOWN\n";
    }
    return 0;
}
