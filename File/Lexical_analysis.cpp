//Mini Lexical Analyser Development
//Written in: C, C++ or Standard C++

#include <bits/stdc++.h>
#define d 7
#define q 7
using namespace std;

/*Pattern Matching Algorithm */
bool Matching(string text , string pattern)
{
    int m=pattern.size();
    int n=text.size();

    int i,j;
    int p=0;
    int t=0;
    int h=1;
    for(i=0; i<m-1; i++)
    {
o        h=(d*h)%q;
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
/* for index counting where match found */
/*
int index_count(string text , string pattern)
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
            if(j==m) return i;
        }
        if(i<n-m)
        {
            t = (d*(t - text[i]*h) + text[i+m])%q;
            if(t < 0)
                t = (t + q);
        }
    }
}
*/
int main()
{
    /*Load Data From File*/
    int br[7] = {0};
    int data[6] = {0};
    string keyword[32] = {"auto", "break", "case", "char", "const", "continue", "default", "do", "double", "else", "enum", "extern", "float", "for", "goto", "if","int", "long", "register", "return", "short", "signed", "sixeof", "static", "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while"};
    string datatype[6] = {"int", "char", "float", "double"};
    string a_operator[14] = {"+", "-", "*", "/", "%", "--", "++"};
    string r_operator[12] = {">", ">=", "<", "<=", "==", "!="};
    string l_operator[6] = {"&&", "||", "!"};
    string b_operator[12] = {"&","|","~","^","<<",">>"};
    FILE *ff;
    char input[1000];
    char save[100][1000];
    int k = 0,i,j, l;
    if((ff = fopen("E://file//read.txt", "r")) == NULL)
    {
        puts("Invalid File .. !");
        return 0;
    }
    else
    {
        do
        {
            fgets(input, 999, ff);
            int len = strlen(input);
            for(i = 0; i < len; i++)
            {
                save[k][i] = input[i];
            }
            k++;
        }
        while(!feof(ff));
        fclose(ff);
        puts("File found ..... \n");
    }
    for(i = 0; i < k; i++)
    {
        cout<<endl;
        if(Matching(save[i], "#include") == true)
        {
            cout<<save[i]<<"      - is Header file"<<endl;
        }
        else if(Matching(save[i], "main()") == true)
        {
            puts("main() - Main Function");
        }
        else if(Matching(save[i], "printf") == true)
        {
            puts("printf() - is a function");
        }
        else if(Matching(save[i], "scanf") == true)
        {
            puts("scanf() - is a function");
        }
        else if(Matching(save[i], "(") == true)
        {
            cout<<"( - Left Parenthesis"<<endl;
        }
        else if(Matching(save[i], ")") == true)
        {
            cout<<") - Right Parenthesis"<<endl;
        }
        else if(Matching(save[i], "{") == true)
        {
            cout<<"{ - Left Curly Bracket"<<endl;
        }
        else if(Matching(save[i], "}") == true)
        {
            cout<<"} - Right Curly Bracket"<<endl;

        }
        else if(Matching(save[i], "[") == true)
        {
            cout<<"[ - Left Bracket"<<endl;
        }
        else if(Matching(save[i], "]") == true)
        {
            cout<<"] - Right Bracket"<<endl;
        }
        if((Matching(save[i], "for") == false) && (Matching(save[i], ";") == true))
        {
            cout<<"; - is statement terminator"<<endl;
        }
        else if((Matching(save[i], "for") == true) && (Matching(save[i], ";") == true))
        {
            cout<<"; - is used inside for loop as condition separator"<<endl;
        }
        for(l = 0; l < 32; l++)
        {
            if(Matching(save[i], keyword[l]) == true)
            {
                cout<<keyword[l]<<" - Keyword"<<endl;
            }
        }
        for(l = 0; l < 5; l++)
        {
            if(Matching(save[i], a_operator[l]) == true)
            {
                cout<<a_operator[l]<<" - Arithmetic operator"<<endl;
            }
        }
        for(l = 0; l < 5; l++)
        {
            if(Matching(save[i], r_operator[l]) == true)
            {
                cout<<r_operator[l]<<" - Relational operator"<<endl;
            }
        }
        for(l = 0; l < 3; l++)
        {
            if(Matching(save[i], l_operator[l]) == true)
            {
                cout<<l_operator[l]<<" - Logical operator"<<endl;
            }
        }
        for(l = 0; l < 6; l++)
        {
            if(Matching(save[i], b_operator[l]) == true)
            {
                cout<<b_operator[l]<<" - Bitwise operator"<<endl;
            }
        }
        /*
        int loc, d_len, sttlen;
        if(Matching(save[i], datatype[0]) == true)
        {
            loc = index_count(save[i], datatype[0]);
            d_len = datatype[0].size();
            sttlen = strlen(save[j]);
            if(save[i][loc-1] == 'k')
            {
                puts("int - Return type of main() function");
            }
            else if(save[i][loc] == 'k' && save[i][loc+d_len] == ' ')
            {
                puts("int - Datatype/Keyword");
                for(int kk = (loc+d_len)+1; kk < sttlen-2; kk++)
                {
                    cout<<save[i][kk];
                }
                puts(" - Identifier (Variable Name)");
            }
        }
        else
        {
            for(l = 1; l < 4; l++)
            {
                if(Matching(save[i], datatype[l]) == true)
                {
                    loc = index_count(save[i], datatype[l]);
                    d_len = datatype[l].size();
                    sttlen = strlen(save[i]);
                    if(save[i][loc] == datatype[l][0] && save[i][loc+d_len] == ' ')
                    {
                        cout<<datatype[l]<<" - is a Keyword"<<endl;
                    }
                    for(int kk = (loc+d_len)+1; kk < sttlen-2; kk++)
                    {
                        cout<<save[i][kk];
                    }
                    puts(" - Identifier ");
                }
            }
        }
        for(l = 0; l < 31; l++)
        {
            if(Matching(save[i], Keyword[l]) == true)
            {
                loc = index_count(save[i], Keyword[l]);
                d_len = Keyword[l].size();
                if((save[i][loc] == Keyword[l][0]) && ((save[i][d_len+loc] == ' ') || (save[i][d_len+loc] == ';')))
                {
                    cout<<Keyword[l]<<" - is keyword"<<endl;
                }
                else
                {
                    continue;
                }
            }
        }
        */
    }
    return 0;
}
