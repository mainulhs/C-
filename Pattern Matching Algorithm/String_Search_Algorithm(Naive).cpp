#include <bits/stdc++.h>

using namespace std;
int main()
{
    char text[1000],pattern[1000];
    int i,j,m,n,fl=1;
    cout<<"Enter the text: ";
    cin>>text;
    cout<<"Enter the Pattern: ";
    cin>>pattern;
    n=strlen(text);
    m=strlen(pattern);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(text[i+j] != pattern[j])
            {
                break;
            }
        }
        if(j==m)
        {
            cout<<"Match found at position: "<<i+1<<endl;
            fl=0;
        }
    }
    if(fl==1)
    {
        cout<<"\nNo match found."<<endl;
    }
    return 0;
}
