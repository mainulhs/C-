#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;


int Convert(int num)
{
    int count = 0;
    if(num == 1 || num == 2 || num == 4)
    {
        count = 0;
    }
    else if(num == 3)
    {
        count = 8;
    }
    else
    {
        while(num != 4)
        {
            if(num % 2 == 0)
            {
                num /= 2;
            }
            else
            {
                num = (num * 3) + 1;
            }
            count++;
        }
    }
    return count;
}
int main()
{
    int test, num, res;
    cin>>test;
    while(test--)
    {
        cin>>num;
        res = Convert(num);
        cout<<res<<" ";
    }
    return 0;
}
