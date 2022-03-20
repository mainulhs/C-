#include<stdio.h>
int main()
{


int i=1;
int sum=0;
do{
    printf("%d",&i);
sum=sum+i;
i++;
}while(i<=20);
printf("\n The sum is %d",sum);
return 0;
}
