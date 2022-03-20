//First come First scheduling Implemntation...
//Mainul Hassan
//FSET , Ustc
#include<iostream>
#define max 3
using namespace std;
class process
{
public:
    char p[10];
    int time;
} test[max];
int main()
{
    int i,j=0;
    int sum=0,asum=0,tsum=0;
    int burst_time[max+2],waiting_time[max+2],tat[max+2],awt;
    cout<<"Enter the Process Name & Burst time:\n";
    for(i=1; i<=max; i++)
    {
        cin>>test[i].p>>test[i].time;
    }
    for(i=1; i<=max; i++)
    {
        burst_time[i]=test[i].time;
        j++;
    }
    for(i=1; i<=max; i++)
    {
        waiting_time[i]=sum;
        sum+=burst_time[i];
    }
    cout<<"\nWaiting time:\n";
    for(i=1; i<=max; i++)
    {
        cout<<test[i].p<<": "<<waiting_time[i]<<"ms\n";
    }
    for(i=1; i<=max; i++)
    {
        tsum+=burst_time[i];
        tat[i]=tsum;
    }
    cout<<"\nTurn arround Time:\n";
    for(i=1; i<=max; i++)
    {
        cout<<test[i].p<<": "<<tat[i]<<"ms\n";
    }
    for(i=1; i<=max; i++)
    {
        asum+=waiting_time[i];
    }
    awt=asum/max;
    cout<<"Average waiting time:\n"<<awt<<endl;
    return 0;
}
