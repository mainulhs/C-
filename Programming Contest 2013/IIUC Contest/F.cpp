#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int test;
    double x,y,r, res, low, high;
    cin>>test;
    while(test--)
    {
        cin>>x>>y>>r;
        res = (double)(sqrt((x*x) + (y*y)));
        low =r - res;
        high =r + res;
        cout<<fixed<<setprecision(2)<<low<<" "<<high<<endl;
    }
    return 0;
}
