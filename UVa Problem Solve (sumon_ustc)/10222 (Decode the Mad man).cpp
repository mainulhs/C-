//Mainul Hassan
//Department of CSE
//FSET,USTC
//UVa Id: sumon_ustc
#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
int i,l;
char s[100000];
while(gets(s))
{
l=strlen(s);
for(i=0;i<l;i++)
    switch(s[i])
        {
        case ' ':    cout<<" "; break;
        case 'a':
        case 'A':     cout<<"["; break;
        case 's':
        case 'S':     cout<<"]"; break;
        case 'z':
        case 'Z':     cout<<"'"; break;
        case 'x':
        case 'X':     cout<<"\\"; break;
        case 'e':
        case 'E':     cout<<"q"; break;
        case 'r':
        case 'R':     cout<<"w"; break;
        case 't':
        case 'T':     cout<<"e"; break;
        case 'y':
        case 'Y':     cout<<"r"; break;
        case 'u':
        case 'U':     cout<<"t"; break;
        case 'i':
        case 'I':     cout<<"y"; break;
        case 'o':
        case 'O':     cout<<"u"; break;
        case 'p':
        case 'P':     cout<<"i"; break;
        case '[':     cout<<"o"; break;
        case ']':     cout<<"p"; break;
        case 'd':
        case 'D':     cout<<"a"; break;
        case 'f':
        case 'F':     cout<<"s"; break;
        case 'g':
        case 'G':     cout<<"d"; break;
        case 'h':
        case 'H':     cout<<"f"; break;
        case 'j':
        case 'J':     cout<<"g"; break;
        case 'k':
        case 'K':     cout<<"h"; break;
        case 'l':
        case 'L':     cout<<"j"; break;
        case ';':     cout<<"k"; break;
        case '\\':      cout<<";"; break;
        case 'c':
        case 'C':     cout<<"z"; break;
        case 'v':
        case 'V':     cout<<"x"; break;
        case 'b':
        case 'B':     cout<<"c"; break;
        case 'n':
        case 'N':     cout<<"v"; break;
        case 'm':
        case 'M':     cout<<"b"; break;
        case ',':     cout<<"n"; break;
        case '.':     cout<<"m"; break;
        case '/':     cout<<","; break;
        case 'q':
        case 'Q':
        case 'w':
        case 'W':
        case '{':
        case '}':
        case ':':
        case '"':
        case '|':
        case '<':
        case '>':
        case '?':   break;
        default :
        cout<<"l";
        break;
        }
cout<<"\n";
}
return 0;
}
