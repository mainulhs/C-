#include<iostream>
using namespace std;
long long n,k;
long long b(long long l,long long r)
{
    if (n==1) return 0;
    while (r-l>1)
    {
        long long  m=(l+r)/2;
        if ((m+k-1)*(k-m)>2*(n-1)) l=m;
        else r=m;
    }
    if ((l+k-1)*(k-l)>2*(n-1)) l=r;
    if ((l+k-1)*(k-l)<2*(n-1)) l--;

    if (l==0) return -1;
    return k-l;
}
int main()
{
    cin>>n>>k;
    cout<<b(1,k-1)<<endl;


    return 0;
}
