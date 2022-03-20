#include <bits/stdc++.h>
using namespace std;

//function for pattern checking....
int dfa[10][10];
char c[10], st[10];
int check(char b,int d)
{
    int j,ninput;
    for(j = 0; j < ninput; j++)
        if(b == c[j])
            return(dfa[d][j]);
    return -1;
}

int main()
{

    int nstate,ninput,nfinal;
    int f[10];
    int i,j,s=0,final=0;
    cout<<"Enter the number of states DFA consist : ";
    cin>>nstate;
    cout<<"Enter the number of input symbol that DFA consist :";
    cin>>ninput;
    cout<<"\nEnter input symbols\t";

    for(i = 0; i < ninput; i++)
    {
        cout<<"\n\n"<<i+1<<" input\t";
        cin>>c[i];
    }

    cout<<"\n\nEnter number of final states\t";
    cin>>nfinal;

    for(i = 0; i < nfinal; i++)
    {
        cout<<"\n\nFinal state"<<i+1<<" : q";
        cin>>f[i];
    }

    cout<<"------------------------------------------------------------------";

    for(i=0; i<ninput; i++)
    {
        for(j=0; j<nstate; j++)
        {
            printf("\n(q%d , %c ) = q",j,c[i]);
            scanf("%d",&dfa[i][j]);
        }
    }
    i=0;
    cout<<"\n\nEnter Input String : ";
    cin>>st;

    while(st[i] != '\0')
    {
        if((s = check(st[i++],s)) < 0)
            break;
    }
    for(i = 0 ; i < nfinal ; i++)
    {
        if(f[i] == s )
            final = 1;
        if(final == 1)
            cout<<"Invalid string";
        else
            cout<<"\n Valid string";
    }
    return 0;
}


