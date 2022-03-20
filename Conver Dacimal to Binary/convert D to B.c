#include<stdio.h>
void main()
{
int n,b[8],i=0,r;
printf("Enter a integer number :\n");
scanf("%d",&n);
while(n>1){
b[i]=n%2;
n=n/2;
i++;
}
b[i]=n;
printf("The Binary equivalent is :\n");
for(r=i;r>=0;r--)
printf("%d",b[r]);
}
