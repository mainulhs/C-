#include <iostream>
#include <cmath>
using namespace std;
int compute(int n)
{
  int i,j,k,flag=0;
  for(j=2; j<=sqrt(n); j++)
    {
      if(n % j == 0)
       {
        flag=1;
        break;
       }
      else
        flag=0;
     }

    if(flag == 0)
      return 1;
    else
      return 0;
}

int main()
{
  int i, j, f;
  int n;

 while(cin>>n)
{
    if(n == 0)
        break;
    f = 0;
     for(i = 3; i <= n/2; i = i + 2)
     {

       if(compute(i) && compute(n-i))
        {
       cout<<n<<" = "<<i<<" + "<<n-i<<"\n";
       f = 1;
       break;
       }
     }
   if(f == 0)
 cout<<"Goldbach's conjecture is wrong.\n";
   }
return 0;
}
