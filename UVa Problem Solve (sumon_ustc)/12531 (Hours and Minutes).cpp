#include <iostream>
using namespace std;
int main()
 {
     int n;
     while(cin>>n)
     {
         if(n % 6)
         {
             cout<<"N\n";
         }
         else
            cout<<"Y\n";
     }
     return 0;
 }
