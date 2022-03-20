//Mainul Hassan
//UVa ID: sumon_ustc
//FSET, USTC
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int test, caseno=0;
    scanf("%d", &test);
    while(test--)
    {
        int R;
        scanf("%d", &R);
        cout<<"Case "<<++caseno<<":"<<endl;
        cout<<(- R * 45/20)<<" "<<(R * 30/20)<<endl;
        cout<<(R * 55/20)<<" "<<(R * 30/20)<<endl;
        cout<<(R * 55/20)<<" "<<(- R * 30/20)<<endl;
        cout<<(- R * 45/20)<<" "<<(- R * 30/20)<<endl;
    }
    return 0;
}
