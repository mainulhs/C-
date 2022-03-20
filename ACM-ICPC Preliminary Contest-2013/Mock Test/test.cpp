#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <algorithm>
#include <string>
#include <iomanip>

#define PI acos(-1.0)

using namespace std;

int main()
{
    int test;
    int a,b;
    cin>>test;
    while(test--)
    {
        cin>>a>>b;
        int s = abs(a+b);
        cout<<s<<endl;
    }
    return 0;
}

