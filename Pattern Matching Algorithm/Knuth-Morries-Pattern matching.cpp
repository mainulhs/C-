//another process
#include <bits/stdc++.h>

using namespace std;

void pre_KMP(string pattern, int f[])
{
    int m = pattern.length(),k;
    f[0] = -1;
    for (int i = 1; i<m; i++)
    {
        k = f[i-1];
        while (k>=0)
        {
            if (pattern[k]==pattern[i-1])
                break;
            else
                k = f[k];
        }
        f[i] = k + 1;
    }
}

bool KMP(string pattern, string target)
{
    int m = pattern.length();
    int n = target.length();
    int f[m];

    preKMP(pattern, f);

    int i = 0;
    int k = 0;

    while (i<n)
    {
        if (k==-1)
        {
            i++;
            k = 0;
        }
        else if (target[i]==pattern[k])
        {
            i++;
            k++;
            if (k==m)
                return true;
        }
        else
            k=f[k];
    }
    return false;
}

int main()
{
    string Text, Pattern;
    int ret;
    while(1)
    {
        cout<<"Enter the Text: ";
        cin>>Text;
        cout<<"Enter the Pattern: ";
        cin>>Pattern;
        if(KMP(Pattern, Text) == false)
        {
            puts("No Match Found");
        }
        else
        {
            puts("Match Found");
        }
    }
    return 0;
}
