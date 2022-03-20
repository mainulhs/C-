#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long a[5],s1,s2;
    int test,caseno = 0;
    cin>>test;
    while(test--)
    {
        for(int i = 0; i < 3; i++)
        {
            cin>>a[i];
        sort(a, a+3);
        s1 = a[0]*a[0] + a[1]*a[1];
        s2 = a[2]*a[2];
        }
        if(s1 == s2)
        {
            printf("Case %d: yes\n", ++caseno);
        }
        else
            printf("Case %d: no\n", ++caseno);
    }
    return 0;
}
