#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int waiting_time[10],tat[10],burst_time[10],arrival_time[10];
    int temp,a,i,j,n,sum=0,stat=0;
    float avgwt,avgtat;
    char pname[10][10],t[10][10];
    cout<<"\nEnter the number of processes : ";
    cin>>n;
    cout<<"\nEnter Process Name & Burst time : \n\n";
    for(i=0; i<n; i++)
    {
        cin>>pname[i];
        cin>>burst_time[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(burst_time[i] > burst_time[j])
            {
                a = burst_time[i];
                burst_time[i] = burst_time[j];
                burst_time[j] = a;
                strcpy(t[i],pname[i]);
                strcpy(pname[i],pname[j]);
                strcpy(pname[j],t[i]);
            }
        }
    }
    waiting_time[0]=0;
    for(i=0; i<n; i++)
    {
        waiting_time[i+1]=waiting_time[i]+burst_time[i];
        tat[i]=waiting_time[i]+burst_time[i];
        sum=sum+waiting_time[i];
    }
    avgwt=(float)sum/n;
    cout<<"\nProcess name\t\twaiting time\t\tTurnaround Time\n\n";

    for(i=0; i<n; i++)
    {
        cout<<pname[i]<<"\t\t\t"<<waiting_time[i]<<" ms"<<"\t\t\t"<<tat[i]<<" ms"<<"\n\n";
    }
    cout<<"Average Waiting time : "<<avgwt<<" ms"<<endl;
    return 0;
}
