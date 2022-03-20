#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, res, test, caseno = 0;
    cin>>test;
    while(test--)
    {
        cin>>a>>b;
        c = (a / 3 * 2 + (a % 3 == 2));
        d = (b / 3 * 2 + (b % 3 == 2));
        res = d- c;
        cout<<"Case "<<++caseno<<": "<<res<<endl;
    }
    return 0;
}

