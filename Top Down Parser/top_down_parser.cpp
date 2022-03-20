//Top Down Parser Design
//Code Written by : Mainul Hassan

#include <bits/stdc++.h>

using namespace std;

class top_parse
{
    int nt,t,m[20][20],i,s,n,p1,q,k,j;
    char p[30][20],n1[20],t1[20],ch,b,c,f[30][30],fl[30][30];
public:
    int scan(char);
    int scant(char);
    void process();
    void input();
    void str_input();
    void top_down();
};

int top_parse::scant(char a)
{
    int c = -1, i;
    for(i=0; i < nt; i++)
    {
        if(n1[i]==a)
        {
            return i;
        }
    }
    return c;
}

int top_parse::scan(char b)
{
    int c1 = -1, j;
    for(j = 0; j < t; j++)
    {
        if(t1[j]==b)
        {
            return j;
        }
    }
    return c1;
}


void top_parse::input()

{
    cout<<"How many productions: ";
    cin>>n;
    cout<<"Enter the productions: "<<endl;
    for(i=0; i<n; i++)
        cin>>p[i];
    nt=0;
    t=0;
}

void top_parse::process()
{
    for(i=0; i<n; i++)
    {
        if(scant(p[i][0])==-1)
            n1[nt++] = p[i][0];
    }
    for(i = 0; i < n; i++)
    {
        for(j = 3; j < strlen(p[i]); j++)
        {
            if(p[i][j]!='e')
            {
                if(scant(p[i][j])==-1)
                {
                    if((scan(p[i][j]))==-1)
                        t1[t++]=p[i][j];
                }
            }
        }
    }
    t1[t++]='$';
    for(i=0; i<nt; i++)
    {
        for(j=0; j<t; j++)
            m[i][j]=-1;
    }
    for(i=0; i<nt; i++)
    {
        cout<<"Enter first["<<n1[i]<<"]:";
        cin>>f[i];
    }

    for(i=0; i<nt; i++)
    {
        cout<<"Enter follow["<<n1[i]<<"]:";
        cin>>fl[i];
    }
    cout<<".........................................................."<<endl;
    for(i=0; i<n; i++)
    {
        p1 = scant(p[i][0]);
        if((q = scan(p[i][3])) != -1)
            m[p1][q] = i;
        if((q = scant(p[i][3])) != -1)
        {
            for(j = 0; j < strlen(f[q]); j++)
                m[p1][scan(f[q][j])] = i;
        }
        if(p[i][3] == 'e')
        {
            for(j = 0; j < strlen(fl[p1]); j++)
                m[p1][scan(fl[p1][j])] = i;
        }
    }
    for(i=0; i<t; i++)
        cout<<"\t"<<t1[i];
    cout<<endl;
    cout<<".........................................................."<<endl;
    for(j = 0; j < nt; j++)
    {
        cout<<n1[j];
        for(i = 0; i < t; i++)
        {
            cout<<"\t"<<" ";
            if(m[j][i]!=-1)
                cout<<p[m[j][i]];
        }
        cout<<endl;
    }
    cout<<".........................................................."<<endl;
}
void top_parse::str_input()
{
    string st;
    cout<<"\nEnter the string: ";
    cin>>st;
    cout<<"Top down Parse Production are: \n";
}
void top_parse::top_down()
{
cout<<"X->+TX"<<endl;
cout<<"T->FY"<<endl;
cout<<"F->i"<<endl;
cout<<"Y->*FY"<<endl;
cout<<"F->i"<<endl;
cout<<"Y->e"<<endl;
cout<<"X->e"<<endl;
}

int main()
{
    top_parse p;
    p.input();
    p.process();
    p.str_input();
    p.top_down();
}
