#include <iostream>
using namespace std;
int main()
{
    int n,a,b,c,test;
    cin>>test;
    while(test--)
    {
      cin>>n;
      a = n / 2;
      c = a / 2;
      b = n - c;
      cout<<c<<" "<<b<<endl;
    }
    return 0;
}
