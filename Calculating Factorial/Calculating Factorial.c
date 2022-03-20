#include<stdio.h>
void main()
{
int n,R,fact=1;
printf("Enter a number:\n");
scanf("%d",&n);
for(R=1;R<=n;R++)
fact=fact*R;
printf("The factorial is:\n%d\n",fact);
}
