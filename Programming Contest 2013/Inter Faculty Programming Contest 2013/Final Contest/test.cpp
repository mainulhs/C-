#include<cstdio>
int main()
{
int a,n;
while(scanf("%d",&n)==1)
{
a=n;
while(n>=3)
{
a=a+(n/3);
n=(n/3)+(n%3);
}
if(n==3)
{
a++;
}
printf("%d\n",a);
}
return 0;
}
