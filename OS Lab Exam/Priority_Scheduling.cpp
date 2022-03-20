//Code writter:  Mainul Hassan
//Priority scheduling algorithm implementation
#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int main()
{
int priority[20],waiting_time[20],tat[20],burst[10],n,i,j,temp;
float average_wt=0,fwt=0,ftat=0;
char pname[20][20],c[20][20];
cout<<"Enter the number of process:";
cin>>n;
cout<<"Enter the Process name, Burst Time, Priority:\n";
for(i=0;i<n;i++)
{
    cin>>pname[i];
    cin>>burst[i];
    cin>>priority[i];
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<=n;j++)
    {
       if(priority[i]>priority[j])
    {
    temp=priority[j];
    priority[j]=priority[i];
    priority[i]=temp;
    strcpy(c[i],pname[i]);
    strcpy(pname[i],pname[j]);
    strcpy(pname[j],c[i]);
    temp=burst[j];
    burst[j]=burst[i];
    burst[i]=temp;
    }
    }
}
waiting_time[0]=0;
tat[0]=burst[0];
for(i=0;i<n-1;i++)
{
    waiting_time[i+1]=waiting_time[i]+burst[i];
    tat[i+1]=waiting_time[i+1]+burst[i+1];
}
for(i=0;i<n;i++)
{
    fwt=fwt+waiting_time[i];
    ftat=ftat+tat[i];
}
    average_wt=fwt/n;
    cout<<"\n\nProcess \tWaiting Time \tTurnaround Time\n\n";
    for(i=0;i<n;i++)
    {
        cout<<pname[i]<<"\t\t"<<waiting_time[i]<<"\t\t"<<tat[i]<<"\n\n";
    }
    cout<<"Average Waiting time : "<<setprecision(2)<<average_wt<<endl;
    return 0;
}


