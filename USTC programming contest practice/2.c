#include<stdio.h>
int main()
{
   int n1,n2;
   float  n3,sum,avg;
   printf("enter two integer:\n");
   printf("enter a float number:");
   scanf("%d,%d",&n1,&n2);
   scanf("%f",&n3);
   sum=n1+n2+n3;
   avg=sum/3;
   printf("the sum is %f and the avg is %f");
       return 0;
}
