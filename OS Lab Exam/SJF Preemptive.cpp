#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
class Process
{
	public:
	char name[20];
	int arr_time, bur_time;
};
int main()
{
	char tt[20], rt[20];
	int a, b, n, i, j, k, l, atemp, btemp, ct, dt;
	int sum, rsum, wt[20], ssum = 0;
	double avg;

	printf("Number of Process: ");
	scanf("%d", &n);
	Process test[n+1];
	int tat[n+1], ktime[n+1];
	cout<<"Enter the process name, arrival time and burst time:"<<endl;
	for(i = 0; i < n; i++)
	{
		cin>>test[i].name>>test[i].arr_time>>test[i].bur_time;
	}
	for(i = 0; i < n; i++)
	{
		for(j = i + 1; j < n; j++)
		{
			if(test[i].arr_time > test[j].arr_time)
			{
				strcpy(tt, test[i].name);
				strcpy(test[i].name, test[j].name);
				strcpy(test[j].name, tt);

				atemp = test[i].arr_time;
				test[i].arr_time = test[j].arr_time;
				test[j].arr_time = atemp;

				btemp = test[i].bur_time;
				test[i].bur_time = test[j].bur_time;
				test[j].bur_time = btemp;
			}
		}
	}
	a = test[0].arr_time;
	b = test[1].arr_time;
	k = test[0].bur_time;
	l = test[0].arr_time;
	sum = (b-a); rsum = (b-a);
	if(b - a < k)
	{
		test[0].bur_time -= (b-a);
		test[0].arr_time += (b-a);
		for(i = 0; i < n; i++)
		{
			for(j = i + 1; j < n; j++)
			{
				if(test[i].bur_time > test[j].bur_time)
				{
					ct = test[i].arr_time;
					test[i].arr_time = test[j].arr_time;
					test[j].arr_time = ct;

					dt = test[i].bur_time;
					test[i].bur_time = test[j].bur_time;
					test[j].bur_time = dt;

					strcpy(rt, test[i].name);
					strcpy(test[i].name, test[j].name);
					strcpy(test[j].name, rt);
				}
			}
		}
		//Waiting Time
		for(i = 0; i < n; i++)
		{
			wt[i] = sum - test[i].arr_time;
			sum += test[i].bur_time;
		}
		//Turnaround Time
		for(i = 0; i < n; i++)
		{
			rsum += test[i].bur_time;
			tat[i] = rsum - test[i].arr_time;
		}
		//Case Result for Calculating Avg. Waiting Time
		for(i = 0; i < n; i++)
		{
			ssum += wt[i];
		}
		avg = ((double) (ssum)/n);
		cout<<"Process\t\tWaiting Time\t\tTurnaround Time"<<endl;
		for(i = 0; i < n; i++)
		{
			cout<<test[i].name<<"\t\t\t"<<wt[i]<<"\t\t\t"<<tat[i]<<endl;
		}
		printf("Average Waiting Time: %.2lf\n", avg);
	}
	return 0;
}
