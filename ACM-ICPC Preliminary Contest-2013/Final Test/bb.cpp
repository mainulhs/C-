#include<cstdio>
using namespace std;
int main()
{
    int cases, caseno, a, b, c, d;

    scanf("%d", &cases);
    for(caseno = 1; caseno <= cases; caseno++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        printf("Case %d: ", caseno);
        if(a<= (b+c+d) && b<= (a+c+d) && c<=(a+b+d)&& d<=(a+b+c))
            printf("Okay\n");
        else
            printf("Not Okay\n");
    }

    return 0;
}
