#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n % 2 == 0)
        {
            cout<<"EVEN\n";
        }
        else
            cout<<"ODD\n";
    }
    return 0;
}
