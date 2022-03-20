#include<fstream>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define fi "11417.inp"
#define fo "11417.out"
using namespace std;
int gcd(int a, int b)
{
 if(b==0)
  return a;
 return gcd(b, a%b);
}
int main()
{
 //freopen(fi,"r",stdin);
 //freopen(fo,"w",stdout);
 int i,j,n;
 long long int g,res;
 while(scanf("%d",&n) == 1)
 {
  if(n==0)
   break;
  g=0;
  for(i=1;i<n;i++)
   for(j=i+1;j<=n;j++)
    g = g + gcd(i,j);
    res = gcd(i,j)/2;
  printf("%lld\n",res);
 }
 return 0;

}
