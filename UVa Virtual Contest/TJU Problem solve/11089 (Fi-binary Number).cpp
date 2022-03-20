#include <iostream>
using namespace std;
int main()
{
    int t, dec, i = 0, a[100];
    cin>>t;
    while(t--)
    {
        cin>>dec;
        while(dec > 0)
        {
            a[i] = dec % 2;
            dec = dec / 2;
            i++;
        }
        for(int j = i - 1; j >= 0; j--)
        {
            cout<<a[j];
        }
        cout<<endl;
    }
    return 0;
}
