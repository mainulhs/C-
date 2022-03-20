#include<stdio.h>
#define true 1
#define false 0
int n,tq,totwt=0,tottrnd=0;
struct pr
{
    int srvst,wt;
//    int wt;
    int trndt;
    int flag;
    int temp;
}prc[10];

void printpr()
{
    printf("\nProcess_id\tServicetime\tWaitingtime\tTurnarndtime\n");int i;
    for(i=0;i<n;i++)
    {
        printf("\n%d \t\t%d \t\t%d \t\t%d\t\n",i,prc[i].srvst,prc[i].wt,prc[i].trndt);
    }
    printf("Average waiting time=%f\nAverage turnaroundtime=%f\n\n",(float)totwt/n,(float)tottrnd/n);
}

void rschedule()
{
    int trnd=0,i=0,t1;
    while(completed()==false)
    {
        if(prc[i].flag==false)
        {
            if(prc[i].temp==0||prc[i].temp<=tq)
            {
                prc[i].flag=true;
                trnd+=prc[i].temp;
                tottrnd+=prc[i].trndt=trnd;
                prc[i].temp=0;
            }
            else
            {
                trnd+=tq;
                prc[i].temp-=tq;
            }
        }
        i=(i+1)%n;
    }
}

int completed()
{
    int sum=0,i;
    for(i=0;i<n;i++)
    {
        if(prc[i].flag==true)
            sum++;
    }
    if(sum==n)
        return true;
        return false;
}

main()
{
    int i;
    printf("\n\t\t<<<ROUND ROBIN SCHEDULING>>>\nEnter the timequantum: ");
    scanf("%d",&tq);
    printf("Enter the number of processes:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        //printf("\nEnter the details for process %d:\nService time:",i);
        printf("\n Enter process %d Service time:",i);
        scanf("%d",&prc[i].srvst);
        prc[i].flag=false;
        prc[i].temp=prc[i].srvst;
    }
    prc[0].wt=0;int wtprmtr=0;
    for(i=0;i<n-1;i++)
    {
        if(prc[i].srvst<tq)
            wtprmtr+=prc[i].srvst;
        else
            wtprmtr+=tq;
        prc[i+1].wt=wtprmtr;
        totwt+=prc[i+1].wt;
    }
    rschedule();
    printpr();
}

