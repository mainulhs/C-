#include <iostream>
#include <cmath>
#include <iomanip>
#define pi 2*acos(0.0)
using namespace std;
int main()
{
    double r,n;
    while(cin>>r>>n)
    {
        cout<<fixed<<setprecision(3)<<(n* r * r)/2 * sin((2 * pi)/n)<<endl;
    }
    return 0;
}
