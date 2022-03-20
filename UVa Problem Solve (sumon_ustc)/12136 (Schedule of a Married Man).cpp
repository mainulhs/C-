#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    int test,caseno=0,n,m,a,b,c,d,e,f,g,h;
    cin>>test;
    while(test--)
    {
        scanf("%d:%d %d:%d", &a, &b, &c, &d);
        a = a * 60 + b;
        c = c * 60 + d;
        scanf("%d:%d %d:%d", &e, &f, &g, &h);
        e = e * 60 + f;
        g = g * 60 + h;
        if(e>c || a>g)
        cout<<"Case "<<++caseno<<": Hits Meeting"<<endl;
        else
        cout<<"Case "<<++caseno<<": Mrs Meeting"<<endl;
    }
    return 0;
}

