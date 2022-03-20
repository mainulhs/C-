//Mainul Hassan
//Shortest job First Scheduling
#include<iostream>
using namespace std;
int main()
{
int process[10],waiting_time[10],arrival_time[10],tat[10],average_wt=0,fwt=0,ftat=0;
int n,i,j,temp;
char pname[10][10];
cout<<"Enter the number of process:";
cin>>n;
cout<<"Enter the Process name & Burst Time:\n";
for(i=0;i<n;i++)
{
    cin>>pname[i];
    cin>>process[i];
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<=n;j++)
    {
       if(process[i]>process[j])
    {
    temp=process[j];
    process[j]=process[i];
    process[i]=temp;
    }
    }
}
waiting_time[0]=0;
tat[0]=process[0];
for(i=0;i<n-1;i++)
{
    waiting_time[i+1]=waiting_time[i]+process[i];
    tat[i+1]=waiting_time[i+1]+process[i+1];
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
    cout<<"Average Waiting time : "<<average_wt<<endl;
    return 0;
}


