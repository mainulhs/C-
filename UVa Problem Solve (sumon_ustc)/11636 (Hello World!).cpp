#include <cstdio>
using namespace std;
int main()
{
    long int tcase=0,count,p,n;
    while(scanf("%d",&n))
    {
        count = 1,p = 0;
        if(n<1)
            break;
        else if(n == 1)
            p=0;
        else
        {
            while(true)
            {
                count = count * 2;
                if(count >= n)
                {
                    p++;
                    break;
                }
                else
                    p++;
            }
        }
        printf("Case %d: \n",++tcase,p);
    }
    return 0;
}
