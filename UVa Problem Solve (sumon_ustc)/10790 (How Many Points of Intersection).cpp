#include <iostream>
using namespace std;
int main()
{
    long tcase = 0, a, b, res1, res2;
    while(cin>>a>>b)
    {
        if(a == 0 && b == 0)
        {
            break;
        }

        res1 = (a * (a-1))/2;
        res2 = (b * (b-1))/2;
        cout<<"Case "<<++tcase<<": "<<(res1 * res2)<<endl;
    }
    return 0;
}
