#include<iostream>
#include<fstream>
#include<cstring>
#include<cstdio>
using namespace std;
class student{
protected:
char name[40];
char roll[10];
char dep[5];
char batch[5];
void get()
{
    cout<<"\n Enter the name:";
    cin>>name;
    cout<<"\n Enter the roll:";
    cin>>roll;
    cout<<"\n Enter the deperment:";
    cin>>dep;
    cout<<"\n Enter the batch:";
    cin>>batch;
    }
};
class cgpa:protected student{
private:
char subname[10][20];
char subcode[10][20];
float gpa[10];
float credit[10];
float totalcredit;
float subg[10];
float total;
int i;
float grade;
char gradno[4];
public:
void getgpa();
void file();
void gra(float);
};
void cgpa::gra(float k){while(1)
{
    if(k<2.00)
    {
        strcpy(gradno,"F");
        break;
    }
    else if(k<2.25)
    {
        strcpy(gradno,"D");
        break;
    }
    else if(k<2.50)
    {
        strcpy(gradno,"C");
        break;
    }
    else if(k<2.75)
    {
        strcpy(gradno,"C+");
        break;
    }
    else if(k<3.00)
    {
        strcpy(gradno,"B-");
        break;
    }
      else if(k<3.25)
    {
        strcpy(gradno,"B");
        break;
    }
      else if(k<3.50)
    {
        strcpy(gradno,"B+");
        break;
    }

    else if(k<3.75)
    {
        strcpy(gradno,"A-");
        break;
    }
    else if(k<4.00)
    {
        strcpy(gradno,"A");
        break;
    }
    else if(k==4.00)
    {
        strcpy(gradno,"A+");
        break;
    }
}
}
void cgpa::getgpa(){get();
totalcredit=0;
total=0;
cout<<"How many Subject in the Exam you Attend:";
cin>>i;
for(int j=0;j<i;j++){
    cout<<"\n Enter the Subject name:";
    gets(subname[j]);
    cout<<"\n Enter the Subject code:";
    gets(subcode[j]);
    cout<<"\n Enter the credit of that subject:";
    cin>>credit[j];
    cout<<"\n Enter the gpa of that subject:";
    cin>>gpa[j];
    totalcredit=totalcredit+credit[j];
    subg[j]=gpa[j]*credit[j];
    total=subg[j]+total;
}
grade=total/totalcredit;
cout<<"RESULT"<<grade;
gra(grade);
cout<<"\nGRADE"<<gradno;
fstream x("RESULT",ios::app|ios::out);
x<<endl
<<name<<"\t"<<roll<<"\t"<<grade<<"\t"<<gradno<<endl;
x.close();
}
void cgpa::file()
{
    getgpa();
    ofstream out(roll);
    out<<"\nname"<<name;
    out<<"\nroll"<<roll;
    out<<"\ndeperment"<<dep;
    out<<"\nbatch"<<batch;
    out<<"\n\n\n subject name\t subject code\tcredit of that subject\t gpa of that subject";
    for(int j=0;j<i;j++)
    {
        out<<"\n";
        out<<subname[j];
        out<<"\t\t\t"<<subcode[j];
        out<<"\t\t\t";
        out<<credit[j];
        out<<"\t\t\t";
        out<<gpa[j];
    }
    out<<"\n\nTOTAL CREDIT="<<totalcredit;
    out<<"\n\nTOTAL GRADE POINT="<<grade;
    out<<"\n\nCGPA"<<gradno;
    out.close();
}
int main()
{
    int p;
    while(1);
    {
        cout<<"1..input\n2...show\n3...search\n4...exit";
        cin>>p;
        if(p==1)
        {
            cgpa x;
            x.file();
        }
        if(p==2)
        {
            cout<<"input the roll";
            char roll[20];
            cin>>roll;
            char c;
            ifstream x(roll);
            while(x)
            {
                x.get(c);
                cout<<c;
            }

        }
        if(p==3)
        {
            char c;
            ifstream x("RESULT");
            while(x)
            {
                x.get(c);
                cout<<c;
            }
        }
    }
    return 0;
}

