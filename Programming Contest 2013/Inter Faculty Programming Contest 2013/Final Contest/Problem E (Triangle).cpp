#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
 int test;
 long long n,res;
 cin>>test;
 while(test--)
 {
     cin>>n;
     res=(1 + 3 * (n-1));
     cout<<res<<endl;
 }
 return 0;
}
