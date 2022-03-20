#include<stdio.h>
#include<conio.h>
int main()
{
    int sum,i;
    for(i=1;i<=20;i++)
    {
    printf("%d",&i);
    sum=sum+i;
    }
    printf("\nThe sum is:%d",&sum);
    return 0;
}
