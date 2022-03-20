#include <iostream>
using namespace std;
int main()
{
    int n, test,sum,caseno = 0,c[1000],i;
    cin>>test;
    while(test--)
    {
        cin>>n;
        sum = 0;
        for(i = 0; n>0; i++)
        {
            c[i] = n % 2;
            n = n / 2;
            sum = sum + c[i];
        }
        if(sum % 2 == 0)
        {
            cout<<"Case "<<++caseno<<": even\n";
        }
        else
            cout<<"Case "<<++caseno<<": odd\n";
    }
    return 0;
}
