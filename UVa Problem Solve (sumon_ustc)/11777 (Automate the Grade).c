#include <stdio.h>
int main()
{
    int t,tcase = 0, t1, t2, f,a,ct1,ct2,ct3,avg;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d%d%d%d%d%d%d",&t1,&t2,&f,&a,&ct1,&ct2,&ct3);
        if(ct1 <= ct2 && ct1 <= ct3)
            avg = (ct2 + ct3)/2;
        else if(ct2 <= ct1 && ct2 <= ct3)
            avg = (ct1 + ct3)/2;
        else if(ct3 <= ct1 && ct3 <= ct2)
            avg = (ct1 + ct2)/2;

        int sum =(t1 + t2 + f + a + avg);

        if(sum >= 90)
            printf("Case %d: A\n", ++tcase);
        else if(sum >= 80)
            printf("Case %d: B\n", ++tcase);
        else if(sum >= 70)
            printf("Case %d: C\n", ++tcase);
        else if(sum >= 60)
            printf("Case %d: D\n", ++tcase);
        else if(sum < 60)
            printf("Case %d: F\n", ++tcase);
    }
    return 0;
}
