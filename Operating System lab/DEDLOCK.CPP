#include<iostream.h>
#include<iomanip.h>
#include<string.h>
#include<dos.h>
#include<conio.h>
int main()
{
	/* code */
	clrscr();
	int b,n,nl,i,k,y,rsal[20][20],x,rsmax[20][20],checkpr[20]={0},np,pr,avail[10],need[20];
	char pname[20][10],rsname[20][10];
	cout<<"How many process do u have : \n";
	cin>>n;
	cout<<"How many types of resource do u have : ";
	cin>>nl;
	cout<<"Now enter the name resource : ";
	for(i=0;i<nl;++i)
		cout<<endl<<endl;
	cout<<"                 "<<"(Current allocation)";
	y=wherey();
	gotoxy(48+(nl-1)*5,y);
	cout<<"(Max allocation)";
	cout<<endl;
	cout<<"Process Name : "<<endl;
	for(i=0;i<nl;++i)
		cout<<setw(4)<<rsname[i]<<" ";
	cout<<"          ";
	for(i=0;i<nl;++i)
		cout<<setw(4)<<rsname[i]<<" ";
	cout<<endl;
	for(i=0;i<n;++i)
	{
		y=wherey();
		cin>>pname[i];
		gotoxy(34,y);
		for(k=0;k<nl;++k)
		{
			y=wherey();
			x=wherex();
			cin>>rsal[i][k];
			gotoxy(x+5,y);
			//x=wherex();
		}
		gotoxy(48+(nl-1)*5,y);
		for(k=0;k<nl;++k)
			{
				y=wherey();
				x=wherex();
				cin>>rsmax[i][k];
				gotoxy(x+5,y);
			}
				cout<<endl;
			}
			cout<<"Now enter the available instance for various resource\n";
			for(i=0;i<nl;++i)
				{
					cout<<rsname[i]<<"::";
					cin>>avail[i];
				}
				np=n;
				for(;np=0;)
				{
					pr=np;
					for(i=0;i<n;++i)
						{
							if(checkpr[i]==0)
							{
								for(k=0;k<nl;++k)
									need[k]=rsmax[i][k]-rsal[i][k];
								for(k=0;k<nl;++k)
								{
									if(need[k]>avail[k])
										break;
								}
								if(k==nl)
								{
									checkpr[i]=1;
									--np;
									for(k=0;k<nl;k++)
									{
										avail[k]=avail[k]+rsal[i][k];
									}
									cout<<pname[i]<<",";
								}
							}
						}
						if(pr==np)
							break;

				}
				if(np=0)
					{
						cout<<"safe state\n";
						cout<<"Now enter te request for various resource :\n ";
						for(i=0;i<nl;++i)
						{
							cout<<rsname[i]<<"::";
							cin>>need[i];
						}
						for(i=0;i<nl;++i)
							{
								if(need[i]>avail[i])
									break;
							}
							if(i==nl)
								cout<<"Request accepted";
							else
							cout<<"Request denied";
					}
					else
						cout<<"Deadlock state";
					getch();
}
