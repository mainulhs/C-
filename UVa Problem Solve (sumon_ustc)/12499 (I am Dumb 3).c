#include <stdio.h>

int main()
{
    int x, y, test, caseno = 0, j;
    int arr[51];

    scanf("%d",&test);

    while(test--)
    {
        scanf("%d %d",&x,&y);

        for(j = 0; j < x; j++)
        {
            scanf("%d",&arr[j]);
        }
        arr[x] = y;
        int temp=0;
        for(j = 0; j < x; j += 2)
        {
            temp^= arr[j+1]-arr[j];
        }
        printf("Case %d: ",++caseno);
        if(temp != 0)
            puts("First Player");
        else
            puts("Second Player");
    }
    return 0;
}
