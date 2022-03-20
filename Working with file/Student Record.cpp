#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
class student{
char name[100];
int roll;
public:
void getdata(void)
{
    cout<<"Enter Name:";
    cin>>name;
    cout<<"Enter Roll:";
    cin>>roll;
}
void putdata(void)
{
    cout<<setw(10)<<name;
    cout<<setw(10)<<roll<<endl;
}

};
int main()
{
    student name;
    fstream inoutfile;
    inoutfile.open("STOCK.DAT",ios::ate|ios::in|ios::out|ios::binary);
    inoutfile.seekg(0,ios::beg);
    cout<<"CURRENT RECODR IN FILE"<<"\n";
    while(inoutfile.read((char *) & name,sizeof name))
    {
        name.putdata();
    }
    inoutfile.clear();
    /*>>>>>>>>>>> Add ONE MORE RECORD >>>>>>>>>>>>*/
    cout <<"\nADD AN RECORD\n";
    name.getdata();
    char ch;
    cin.get(ch);
    while(inoutfile.write((char *) & name,sizeof name))
    inoutfile.seekg(0);
    cout<<"CONTENTS OF APPENDED FILE"<<"\n";
    while(inoutfile.read((char *) & name,sizeof name))
    {
        name.putdata();
    }
    int last =inoutfile.tellg();
    int n=last/sizeof(name);
    cout<<"Number of student="<<"\n";
    cout<<"Total bytes in the file\n";
    /*>>>>>>>>MODIFY THE DETAILS OF A STUDENT*/
    cout<<"Enter object number to update\n";
    int object;
    cin>>object;
    cin.get(ch);
    int location=(object-1)*sizeof(name);
    if (inoutfile.eof())
    inoutfile.clear();
    inoutfile.seekp(location);
    cout<<"Enter new values of the object\n";
     name.getdata();
     cin.get(ch);
     inoutfile.write((char *) & name,sizeof name)<<flush;
     /*>>>>>>>>>>>SHOW UPDATED FILE<<<<<<<<<<<<<*/
     inoutfile.seekg(0);
     cout<<"CONTENT OF UPDATED FILE\n";
    while (inoutfile.read((char *) & name,sizeof name))
     {
         name.putdata();
     }
     inoutfile.close();
     return 0;
}
