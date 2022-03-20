#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("Country");
    fout<<"United state of America"<<endl;
    fout<<"United Kingdom"<<endl;
    fout<<"South Korea"<<endl;
fout.close();
    fout.open("Capital");
    fout<<"Washinton"<<endl;
    fout<<"London"<<endl;
    fout<<"Seoul"<<endl;
    fout.close();
    const int N=80;
    char line[N];
    ifstream fin;
    fin.open("Country");
    cout<<"Contest of country file\n";
    while(fin)
    {
        fin.getline(line,N);
        cout<<line;
    }
    fin.close();
    fin.open("Country");
    cout<<"\nContest of Capital file\n";
     while(fin)
    {
        fin.getline(line,N);
        cout<<line;
    }
    fin.close();
    return 0;
    }
