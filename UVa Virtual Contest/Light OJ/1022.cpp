#include <iostream>
#include <iomanip>
#include <cmath>
#define Pi 2 * acos(0.0)
using namespace std;
int main()
{
    int test, caseno = 0;
    cin>>test;
    while(test--)
    {
        double r;
        cin>>r;
        double res = (4 * r * r) - (Pi * r * r);
        cout<<"Case "<<++caseno<<": "<<fixed<<setprecision(2)<<res<<endl;
    }
    return 0;
}
