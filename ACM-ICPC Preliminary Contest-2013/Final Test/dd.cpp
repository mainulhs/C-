#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <algorithm>
using namespace std;

int main()
{
    int test,caseno = 0;
    long r,g,b,w,res;
    cin>>test;
    while(test--)
    {
        cin>>r>>g>>b>>w;
        res = (r+g+b+w)/3;
        cout<<"Case "<<++caseno<<": "<<res<<endl;
    }
    return 0;
}

