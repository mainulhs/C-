#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,burst_time[10],tat[10],waiting_time[10],temp[10],i;
    char pname[10][10];
    float att=0,awt=0;
    cout<<"Enter the number of process : ";
    cin>>n;
    cout<<"\nEnter the Process name & Burst times :\n";
    for(i=0; i<n; i++)
       {
           cin>>pname[i];
           cin>>burst_time[i];
       }
    temp[0]=0;
    for(i=0; i<n; i++)
    {
     temp[i+1]=temp[i]+burst_time[i];
    }
    for(i=0; i<n; i++)
    {
        waiting_time[i]=temp[i];
        tat[i]=temp[i+1];
        awt=awt+waiting_time[i];
        att=att+tat[i];
    }
    awt =awt/n;
    att=att/n;
    cout<<"\n\tProcess\t\tWaiting time\tTurn arround time\n\n";
    for(i=0; i<n; i++)
    {
        cout<<"\t"<<pname[i]<<"\t\t"<<waiting_time[i]<<"\t\t"<<tat[i]<<"\n\n";
    }
    cout<<"Average Waiting time is : "<<awt<<"\n";
    cout<<"Average Turn around time is : "<<att<<"\n";
    return 0;
}
