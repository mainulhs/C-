#include<iostream>
using namespace std;
int main()
{
    char n;
    while(cin>>n)
    {
          for(int i=0;i<=4;i++)
    {
        for(int j=0;j<=i;j++)
            cout<<n;
        cout<<endl;
    }

    }
    return 0;
}
