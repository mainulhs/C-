//Algorithm Name: Naive String Matching Algorithm
//Other process
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, i, j, k;
    char text[1000], pattern[1000];
    while(1)
    {
        k = 0;
        cout<<"Enter the Text: ";
        gets(text);
        if(!strcmp(text, "#"))
        {
            break;
        }
        else
        {
            cout<<"Enter the pattern: ";
            gets(pattern);
            n = strlen(text);
            m = strlen(pattern);
            for(i = 0; i < (n-m) + 2; i++)
            {
                for(j = 0; j < m; j++)
                {
                    if(text[i+j-1] != pattern[j])
                    {
                        //puts("No match found");
                        break;
                    }
                }
                if(j == m)
                {
                    printf("match found at the location: %d to %d\n", i-1, (i-1)+(m-1));
                    k = j;
                }
            }
            if(k == 0)
            {
                puts("No match found");
            }
        }
    }
    return 0;
}
