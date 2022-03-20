#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,i,burst_time[10],waiting_time[10],tat[10],temp[10];
	char pname[10][10];
	float awt=0;
	cout<<"Enter the number of process: ";
	cin>>n;
	cout<<"Enter Process Name & Burst Time : \n";
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
	for (i=0; i<n; i++)
	{
		waiting_time[i]=temp[i];
		tat[i]=temp[i+1];
		awt=awt+waiting_time[i];
	}
	awt=awt/n;
	cout<<"\n\tProcess Name\t\tTurnaround Time\t\tWaiting Time\n ";
	for(i=0; i<n; i++)
    {
      cout<<"\t"<<pname[i]<<"\t\t\t"<<tat[i]<<" ms "<<"\t\t\t"<<waiting_time[i]<<" ms\n\n";
    }
    cout.precision(3);
	cout<<"Average Waiting Time is : "<<awt<<" ms\n";
	return 0;
}
