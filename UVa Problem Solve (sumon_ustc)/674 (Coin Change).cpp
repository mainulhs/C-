#include <iostream>
using namespace std;

long ways [7500];

int count ()
{

    int coin [] = { 50, 25, 10, 5, 1 };

    ways [0] = 1;

    for ( int i = 0; i < 5; i++ ) {
        for ( int j = coin [i]; j < 7500; j++ )
            ways [j] = ways[j] + ways [j - coin [i]];
    }
}
int main()
{
   count();
   int n;
   while(cin>>n)
   {
       cout<<ways[n]<<endl;
   }
     return 0;
}
