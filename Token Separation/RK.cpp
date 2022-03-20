#include <bits/stdc++.h>
using namespace std;
#define d 256
void search(char *txt, char *patt, int q)
{
    int m,n,i,j,p =0,t =0, h=1;
    n = strlen(txt);
    m = strlen(patt);
    for(i =0; i<m-1;i++)
    {
        h = (d*h) %q;
    }
    for(i =0; i<m;i++)
    {
        t = (d * t +txt[i]) %q;
        p = (d * p +patt[i]) %q;
    }
    for(i =0; i<n-m;i++)
    {
        if(t == p)
        {
            for(j =0; j<m;j++)
            {
                if(txt[i+j] != patt[j])
                {
                    break;
                }
            }
                if(j == m)
                {
                    cout<<"Position: "<<i+1<<endl;
                }
        }
            if(i < n-m)
            {
                t = (d * (t - txt[i] *h) + txt[i+m]) %q;
            }
            if(t < 0)
            {
                t = (t+q);
            }

        }
    }
    int main()
    {
        char a[500],b[500];
        int q =7;
        gets(a);
        gets(b);
        search(a,b,q);
    }
