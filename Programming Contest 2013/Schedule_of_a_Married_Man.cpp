#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int i,test,h1,h2,h3,h4,m1,m2,m3,m4,caseno=0;
    cin>>test;
    while(test--)
    {
        int a=0,b=0,c=0,d=0;
        scanf("%d%:%d%d%:%d",&h1,&m1,&h2,&m2);
        scanf("%d%:%d%d%:%d",&h3,&m3,&h4,&m4);
        a=(h1*60)+m1;
        b=(h2*60)+m2;
        c=(h3*60)+m3;
        d=(h3*60)+m4;
        if(h1<a && d<a)
        {
            if(c<b)
            {
                cout<<"Case "<<++caseno<<": "<<"Hits Meeting\n";
            }
            else
                 cout<<"Case "<<++caseno<<": "<<"Mrs Meeting\n";
        }
        else if(c>a && d>a)
        {
            if(c>b)
            {
              cout<<"Case "<<++caseno<<": "<<"Hits Meeting\n";
            }
            else
                cout<<"Case "<<++caseno<<": "<<"Mrs Meeting\n";
        }
        else
            cout<<"Case "<<++caseno<<": "<<"Mrs Meeting\n";
    }
    return 0;
}
