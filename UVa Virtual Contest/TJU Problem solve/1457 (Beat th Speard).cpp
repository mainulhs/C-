#include <iostream>
using namespace std;

int main()
{
    long int t, c, d, w, l, i;
    while(cin>>t)
    {
        i=1;
        while(i <= t)
        {
            cin>>c>>d;
            if(d > c || (c - d)%2 == 1)
                cout<<"impossible\n";
            else
            {
                l = (c-d)/2;
                w = l + d;
                cout<<w<<" "<<l<<endl;
            }
            i++;
        }
    }
    return 0;
}

