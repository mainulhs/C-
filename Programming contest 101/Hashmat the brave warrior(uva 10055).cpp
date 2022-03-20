#include<iostream>
using namespace std;
int main()
{
    long int x,y,z;
    while(cin>>x>>y)
    {
        if(x>y)
        z=x-y;
        else
        z=y-x;
        cout<<z<<endl;

    }
    return 0;
}
