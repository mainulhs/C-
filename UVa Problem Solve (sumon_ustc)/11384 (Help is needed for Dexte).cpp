#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    long n,i;
    while(cin>>n)
    {
        for(i=0; ; i++)
            if(pow (2 , i) > n)
                break;
        cout<<i<<endl;
    }
    return 0;
}
