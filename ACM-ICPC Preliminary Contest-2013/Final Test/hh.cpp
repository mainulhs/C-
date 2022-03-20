#include<cstdio>
#include<cstring>
#define MODDD 2147438647
char f[1000000];
char factorial[100000][10000];
void multiply(long k)
{
    long cin,sum,i;
    long len = strlen(f);
    cin=0;
    i=0;
    while(i<len)
    {
        sum=cin+(f[i] - '0') * k;
        f[i] = (sum % 10) + '0';
        i++;
        cin = sum/10;
    }
    while(cin>0)
    {
        f[i++] = (cin%10) + '0';
        cin/=10;
    }
    f[i]='\0';
    for(long j=0; j<i; j++)
        factorial[k][j]=f[j];
    factorial[k][i]='\0';
}
void fac()
{
    long k;
    strcpy(f,"1");
    for(k=2; k<=1000000000; k++)
        multiply(k);
}
void print(long n)
{
    long i;
    long len = strlen(factorial[n]);
    for(i=len-1; i>=0; i--)
    {
        printf("%c",factorial[n][i]);
    }
    printf("\n");
}
int main()
{
    int t, caseno = 0;
    long n;
    factorial[0][0]='1';
    factorial[1][0]='1';
    fac();
    scanf("%d", &t);
    while(t--)
    {
        scanf("%ld",&n);
        printf("Case %d: ", ++caseno);
        print(n);
    }
    return 0;
}

