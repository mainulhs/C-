#include <iostream>
using namespace std;
int main ()
{
    int t;
    cin>>t;

    while ( t-- )
    {

        int n;
        int a [1000];
        int i = 0;

        cin>>n;

        while ( n )
        {
            a [i] = n % 2;
            n = n / 2;
            i++;
        }

        bool flag = false;
        for ( int index = 0; index < i; index++ )
        {
            if ( a [index] == 1 )
            {
                if ( flag )
                    cout<<" ";
                flag = true + index;
                cout<<index;
            }
        }
        cout<<endl;
    }
    return 0;
}
