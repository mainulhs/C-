#include <bits/stdc++.h>
#define d 17
#define q 17
using namespace std;

/*Pattern Matching Algorithm goes here as a function*/
bool PatternMatching(string text , string pattern)
{
    int m=pattern.size();
    int n=text.size();

    int i,j;
    int p=0;
    int t=0;
    int h=1;
    for(i=0; i<m-1; i++)
    {
        h=(d*h)%q;
    }
    for(i=0; i<m; i++)
    {
        p=(d*p+pattern[i])%q;
        t=(d*t+text[i])%q;
    }

    for(i=0; i<=n-m; i++)
    {
        if(t==p)
        {
            for(j=0; j<m; j++)
            {
                if(text[i+j]!=pattern[j])
                {
                    break;
                }
            }
            if(j==m) return true;
        }
        if(i<n-m)
        {
            t = (d*(t - text[i]*h) + text[i+m])%q;
            if(t < 0)
                t = (t + q);
        }
    }
}
/*Return the index where match found*/
int PatternMatchingLocation(string text , string pattern)
{
    int m=pattern.size();
    int n=text.size();

    int i,j;
    int p=0;
    int t=0;
    int h=1;
    for(i=0; i<m-1; i++)
    {
        h=(d*h)%q;
    }
    for(i=0; i<m; i++)
    {
        p=(d*p+pattern[i])%q;
        t=(d*t+text[i])%q;
    }

    for(i=0; i<=n-m; i++)
    {
        if(t==p)
        {
            for(j=0; j<m; j++)
            {
                if(text[i+j]!=pattern[j])
                {
                    break;
                }
            }
            if(j==m) return true;
        }
        if(i<n-m)
        {
            t = (d*(t - text[i]*h) + text[i+m])%q;
            if(t < 0)
                t = (t + q);
        }
    }
}

int main()
{
    /*Load Data From File*/
    int brackets[7] = {0}, cdatatype[6] = {0}, cc = 0;
    string datatype[6] = {"int", "char", "float", "double"};
    string headerfiles[16] = {"bits/stdc++.h", "cstdio", "cmath", "cstring", "cctype", "cstdlib", "iomanip", "iostream", "vector", "stack", "queue", "map", "set", "stringstream"};
    FILE *fp;
    char in[1000], conv[100][1000];
    int i = 0, j, k, l;
    if((fp = freopen("D://Lexical Analyser Development//lexical.in", "r", stdin)) == NULL)
    {
        puts("Invalid File");
        exit(0);
    }
    do
    {
        fgets(in, 999, fp);
        int len = strlen(in);
        for(j = 0; j < len; j++)
        {
            conv[i][j] = in[j];
        }
        i++;
    }while(!feof(fp));
    fclose(stdin);
    puts("Loading Data From File is successful...\n");
    for(j = 0; j < i; j++)
    {
        cout<<"Line No: "<<(j+1)<<endl;
        cout<<"----------"<<endl<<endl;
        if(PatternMatching(conv[j], "#include") == true)
        {
            for(int k = 0; k < strlen(conv[j]) - 1; k++)
            {
                cout<<conv[j][k];
            }
            for(l = 0; l < 14; l++)
            {
                if(PatternMatching(conv[j], headerfiles[l]) == false)
                {
                    cc++;
                }
            }
            /*Checking Valid and Invalid Header Files*/
            if(cc > 13)
            {
                cout<<" - Invalid Header File"<<endl;
            }
            else
            {
                cout<<" - Header File"<<endl;
            }
            cc = 0;
        }
        else if(PatternMatching(conv[j], "main()") == true)
        {
            puts("main() - Main Function");
        }
        else if(PatternMatching(conv[j], "(") == true /*&& brackets[0] == 0*/)
        {
            cout<<"( - Left Parenthesis"<<endl;
            //brackets[0]++;
        }
        else if(PatternMatching(conv[j], ")") == true /*&& brackets[1] == 0*/)
        {
            cout<<") - Right Parenthesis"<<endl;
            //brackets[1]++;
        }
        else if(PatternMatching(conv[j], "{") == true /*&& brackets[2] == 0*/)
        {
            cout<<"{ - Left Curly Brace"<<endl;
            //brackets[2]++;
        }
        else if(PatternMatching(conv[j], "}") == true /*&& brackets[3] == 0*/)
        {
            cout<<"} - Right Curly Brace"<<endl;
            //brackets[3]++;
        }
        else if(PatternMatching(conv[j], "[") == true /*&& brackets[4] == 0*/)
        {
            cout<<"[ - Left Bracket"<<endl;
            //brackets[4]++;
        }
        else if(PatternMatching(conv[j], "]") == true /*&& brackets[5] == 0*/)
        {
            cout<<"] - Right Bracket"<<endl;
            //brackets[5]++;
        }
        int loc, datalen, sttlen;
        if(PatternMatching(conv[j], datatype[0]) == true)
        {
            loc = PatternMatchingLocation(conv[j], datatype[0]);
            datalen = datatype[0].size();
            sttlen = strlen(conv[j]);
            if(conv[j][loc-1] == 'i')
            {
                puts("int - Return type of main() function");
            }
            else if(conv[j][loc] == 'i' && conv[j][loc+datalen] == ' ')
            {
                puts("int - Datatype/Keyword");
                for(int kk = (loc+datalen)+1; kk < sttlen-2; kk++)
                {
                    cout<<conv[j][kk];
                }
                puts(" - Identifier (Variable Name)");
            }
        }
        else
        {
            for(k = 1; k < 4; k++)
            {
                if(PatternMatching(conv[j], datatype[k]) == true /*&& cdatatype[k] == 0*/)
                {
                    loc = PatternMatchingLocation(conv[j], datatype[k]);
                    datalen = datatype[k].size();
                    sttlen = strlen(conv[j]);
                    if(conv[j][loc] == datatype[k][0] && conv[j][loc+datalen] == ' ')
                    {
                        cout<<datatype[k]<<" - is a Datatype/Keyword"<<endl;
                    }
                    for(int kk = (loc+datalen)+1; kk < sttlen-2; kk++)
                    {
                        cout<<conv[j][kk];
                    }
                    puts(" - Identifier (Variable Name)");
                }
            }
        }
        if((PatternMatching(conv[j], "for") == false) && (PatternMatching(conv[j], ";") == true))
        {
            puts("; - is statement terminator");
        }
        else if((PatternMatching(conv[j], "for") == true) && (PatternMatching(conv[j], ";") == true))
        {
            puts("; - is used inside for loop as condition separator");
        }
        cout<<endl;
    }
    return 0;
}
