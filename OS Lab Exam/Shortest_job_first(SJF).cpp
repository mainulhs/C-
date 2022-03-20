#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,i,burst_time[10],waiting_time[10],tat[10],temp;
	char pname[10][10],c[10][10];
	float awt=0;
	cout<<"Enter the number of Process: ";
	cin>>n;
	cout<<"Enter Process Name & Burst Time :\n";
	for(i=0; i<n; i++)
	{
		cin>>pname[i];
		cin>>burst_time[i];
	}
	for(i=0; i<n; i++)
	{
		for(int j=i+1; j<=n; j++)
		{
			if (burst_time[i] > burst_time[j])
			{
				temp = burst_time[j];
				burst_time[j] = burst_time[i];
				burst_time[i] = temp;
				strcpy(c[i] , pname[i]);
				strcpy(pname[i] , pname[j]);
				strcpy(pname[j] , c[i]);
			}
		}
	}
waiting_time[0] = 0;
tat[0] = burst_time[0];
for(i=0; i<n-1; i++)
{
	waiting_time[i+1]=waiting_time[i]+burst_time[i];
	tat[i+1]=waiting_time[i+1]+burst_time[i+1];
}
for (i=0; i<n; i++)
{
	awt=awt+waiting_time[i];
}
awt=awt/n;
cout<<"\n\n\tProcess Name\t\tTurnaround Time\t\tWaiting Time\n\n";
for(i=0; i<n; i++)
{
	cout<<"\t"<<pname[i]<<"\t\t\t"<<tat[i]<<" ms\t\t\t"<<waiting_time[i]<<" ms\n\n";
}
cout.precision(3);
cout<<"\nAverage Waiting Time is : "<<awt<<" ms\n";
return 0;
}
