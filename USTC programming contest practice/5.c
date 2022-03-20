#include<stdio.h>
int main()
{

int number1,number2,number3,largest;
printf("Enter first number:");
scanf("%d",&number1);
printf("Enter second number:");
scanf("%d",&number2);
printf("Eter third number:");
scanf("%d",number3);
if(number1>number2)
if(number1>number3)
largest=number1;
else
largest=number2;
else
if(number2>number3)
largest=number2;
else
largest=number3;
printf("The largest number is:%d",largest);
}
