#include<iostream>
using namespace std;
void print(int *P);
int main()
{
    int test,c,DNA[10],P[40],T[40],i,j;
    cin>>test;
    for(c=0; c<test; ++i)
    {
        if(c != 0)
            cout<<endl;
        for(i=0; i<10; ++i)
            cin>>DNA[i];
        for(i=0; i<40; ++i)
            P[i]=0;
        P[19]=1;
        print(P);
        for(i=0; i<49; ++i)
        {
            T[0]=DNA[P[0]+P[1]];
            T[39]=DNA[P[39]+P[38]];
            for(j=1; j<39; ++j)
                T[j]=DNA[P[j-1]+P[j]+P[j+1]];
            for(j=0; j<40; ++j)
                P[j]=T[j];
            print(P);
        }
    }
    return 0;
}
void print(int *P)
{
    for(int i=0; i<40; i++)
    {
        if(P[i]==0)
            cout<<' ';
        else if(P[i]==1)
            cout<<'.';
        else if(P[i]==2)
            cout<<'x';
        else if(P[i]==3)
            cout<<'W';
    }
    cout<<endl;
}
