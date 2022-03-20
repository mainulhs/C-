#include <iostream>
using namespace std;
int main()
{
    int test,a,b,caseno = 0;
    cin>>test;
    while(test--)
    {
        cin>>a>>b;
        if(a <= 10 && b <= 10)
            cout<<"Case "<<++caseno<<": "<<(a+b)<<endl;
        else
            break;
    }
    return 0;
}
