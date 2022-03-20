#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
    string s;
    char x ;
    int test;
    cin>>test;
    while(test--)
    {
        while(cin>>s)
        {
            x=getchar();
            reverse(s.begin(),s.end());
            cout<<s;
            putchar(x);

        }

    }
    return 0;
}

