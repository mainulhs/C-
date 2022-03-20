#include<stdio.h>
int main()
{
    int num1,num2,R;
    printf("Enter two number:");
    scanf("%d %d",&num1,&num2);
    R=num1%num2;
    if(R==0)
    printf("%d is an even number",num1);
    if(R==1)
    printf("%d is an odd number",num2);
    printf("\n");
    R=num1%num2;
    if(R==0)
    printf("%d is an even number");
    else
    printf("%d is an odd number");
    return 0;

}
