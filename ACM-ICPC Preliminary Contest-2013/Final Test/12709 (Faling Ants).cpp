#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, l, w, h, temp1, temp2;
    while(scanf("%d", &n))
    {
        if(n == 0)
            break;
            temp1 = temp2 = 0;
        while(n--)
        {
            scanf("%d%d%d", &l, &w, &h);
            if(temp1 < h)
            {
                temp1 = h;
                temp2 = (l * w * h);
            }
            else if(temp1 == h)
            {
                temp2 = max(temp2 , (l * w * h));
            }
        }
        printf("%d\n",temp2);

    }
    return 0;
}
