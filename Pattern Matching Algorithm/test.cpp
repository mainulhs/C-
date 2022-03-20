#include <bits/stdc++.h>

using namespace std;

int search(char *pat, char *txt)
{
    int m = strlen(pat);
    int n = strlen(txt);
    int fl =0;
    /* A loop to slide pat[] one by one */
    for(int i = 0; i <= n - m; i++)
    {
        int j;
        /* A loop to find current index)*/
        for(j = 0; j < m; j++)
        {
            if(pat[i+j] != pat[j])
                break;
        }
        if(j == m)
        {
            cout<<"Pattern found at index %d"<<i<<endl;
            fl = 0;
        }
    }
     if(fl == 1)
        {
            cout <<"Match not found";
        }
}
int main()
{
    char pat[500], txt[500];
    cout<<"Enter the txt : ";
    cin>>txt;
    cout<<"Enter the pattern : ";
    cin>>pat;
    search(pat,txt);
    return 0;
}
