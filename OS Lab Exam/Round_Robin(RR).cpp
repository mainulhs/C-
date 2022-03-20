#include<iostream>
#include<Cstdio>
#define MAX 10
using namespace std;
struct process
{
    char pid[5];
    int bt;
    int bt1;
    int wt;
    int tat;
};
struct process p[MAX];
int count=0,total=0;
int tq;
void getprocess(int n);
void display(int n);
void execuate(int n);
int main()
{
    int n;
    printf("Enter the number of Process : ");
    scanf("%d",&n);
    getprocess(n);
    printf("\nEnter size of time Quantum : ");
    scanf("%d",&tq);
    execuate(n);
    display(n);
}
void getprocess(int n)
{
    int i;
    printf("\nEnter Process Name & Burst Time : \n\n");
    for(i=0; i<n; i++)
    {
        scanf("%s",&p[i].pid);
        scanf("%d",&p[i].bt);
        p[i].bt1=p[i].bt;
        total=total+p[i].bt;
    }
}
void execuate(int n)
{
    int i;
    printf("\nExecution of Processs : \n\n");
    while(count<total)
    {
        for(i=0; i<n; i++)
        {
            if(p[i].bt==0)
            {
                continue;
            }
            else
            {
                if(p[i].bt<=tq)
                {
                    count=count+p[i].bt;
                    p[i].bt=0;
                    printf(" %s  |",p[i].pid);
                    p[i].wt=count-p[i].bt1;
                }
                else
                {
                    p[i].bt=p[i].bt-tq;
                    count=count+tq;
                    printf(" %s  |",p[i].pid);
                }
            }
    }
}
}
void display(int n)
{
    int i;
    float awt=0;
    printf("\n\n\tProcess Name\tBurst Time\tWaiting Time\n");
    for(i=0; i<n; i++)
    {
        printf("\n\t%s\t\t%d\t\t%d\n\t",p[i].pid,p[i].bt1,p[i].wt);
        awt=awt+p[i].wt;
    }
    awt=awt/n;
    printf("\nAvrage Waiting time = %0.2f",awt);
}

