#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
    int test,caseno = 0,i;
    double arr[20];
    cin>>test;
    while(test--)
    {
        double max = 200.0;
        for(i = 0 ; i < 6; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+6);
        printf("Case %d: %0.1lf\n",++caseno,arr[0]);
    }
    return 0;
}
