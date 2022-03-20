/** This is a Program of Scientific Calculator Using C++ **/

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
double mem=0;
int basic();
double phase2();
double phase3();
double phase4();
int main()
{
	double result=0;
	char ch,ans;
	int choice,count=0;
	do
	{
		if(count>0)
		cout<<"\n\n************************************************"<<endl;
		cout<<"Welcome To Calculator operation System.."<<endl;
		cout<<"************************************************"<<endl<<endl;
		cout<<"PHASE 1:BASIC MATH FUNCTIONS : +  -  *  / % "<<endl<<endl;
		cout<<"PHASE 2:MATH FUNCTIONS :"<<(char)251;
		cout<<"  3"<<(char)251<<" "<<(char)252<<(char)251<<endl;
		cout<<"1/x  x^2 x^3 x^y n!"<<endl<<endl;
		cout<<"PHASE 3:MATH FUNCTIONS :sin,cos,"<<endl;
		cout<<"tan,exp,In,Log,sinh,cosh,tanh,asin,acos,atan"<<endl<<endl;
		cout<<"PHASE 4:MATH FUNCTIONS : nPr  nCr  ";
		cout<<(char)228<<endl<<endl;
		cout<<"Enter your choice"<<endl<<endl;
		cout<<"BASIC : 1\t PHASE 2: 2\tPHASE 3: 3"<<endl;
		cout<<"\nPHASE 4 : 4\t TO EXIT : 5"<<endl<<endl;
		cin>>choice;
		if(choice==1)
		{
			result=basic();
		}
		else if(choice==2)
		{
			result=phase2();
		}
		else if(choice==3)
		{
			result=phase3();
		}
		else if(choice==4)
		{
			result=phase4();
		}
		else if(choice==5)
		{
			cout<<"INVALID INPUT"<<endl;
		}
		cout<<"\n\nWould you like to perform any other calculation ?"<<endl;
		cout<<"Press Y to continue"<<endl;
		cout<<"Press N to quit"<<endl;
		cout<<"Press S to view Latest stored Result"<<endl;
		cin>>ans;
		if(ans=='s' || ans=='S')
		{
			cout<<"Stored Result : "<<result;
			ans='y';
		}
		count++;
	}while(ans=='y'|| ans=='Y');
}

//+  -  *  / %
int basic()
{
	cout<<"\nYou can perform basic functions like :+  -  *  / %  "<<endl<<endl;
	double  a,b;
	char ch,lbl;
	if(mem!=0)
	{
		cout<<"Stored value in Memory : "<<mem<<endl<<endl;
		cout<<"Would you like to perform with stored value from memory?"<<endl<<endl;
		cout<<"Press Y or N "<<endl;
		cin>>lbl;
		if(lbl=='Y' || lbl=='y')
		{
			a=mem;
			goto label;
		}
	}
	cout<<"Enter the First Value"<<endl;
	cin>>a;
	label:
	cout<<"Enter the Operator"<<endl;
	cin>>ch;
	cout<<"Enter the second Value"<<endl;
	cin>>b;
	switch(ch)
	{
		case '+':
		{
			cout<<"Result : "<<(a+b);
			mem=(a+b);
			break;
		}
		case '-':
		{
			cout<<"Result : "<<(a-b);
			mem=(a-b);
			break;
		}
		case '*':
		{
			cout<<"Result : "<<(a*b);
			mem=(a*b);
			break;
		}
		case '/':
		{
			if(b==0)
			cout<<"Zero Error!!! Operation cannot be performed"<<endl;
			else
			{
				cout<<"Result : "<<(a/b);
				mem=(a/b);
			}
			break;
		}
		case '%':
		{
			cout<<"Result : "<<((a*b)/100);
			mem=((a*b)/100);
			break;
		}
	}
	return mem;
}

//SquareRoot CubeRoot nthRoot 1/x  x^2 x^3 x^y n!
double phase2()
{

	cout<<"\nYou can perform functions like :"<<endl<<endl;
	cout<<(char)251<<" 3"<<(char)251<<" "<<(char)252<<(char)251;
	cout<<" 1/x  x^2 x^3 x^y n! "<<endl<<endl;

	double  a;
	char ch;
	cout<<"\nEnter the First Value"<<endl;
	cin>>a;
	cout<<"Enter the Operator"<<endl;
	cout<<"\nPress 's' for Square Root 'c' for Cube Root, 'n' for nthRoot "<<endl;
	cout<<"\n'/' for 1/x   '^' for power and '!' for factorial"<<endl<<endl;
	cin>>ch;
	switch(ch)
	{
		case 's':
		{
			cout<<"Result : "<<sqrt(a);
			mem=sqrt(a);
			break;
		}
		case 'c':
		{
			cout<<"Result : "<<pow(a,(double)(1.0/3.0));
			mem=pow(a,(double)(1.0/3.0));
			break;
		}
		case 'n':
		{
			double y;
			cout<<"Enter the Power Value : Example 4,5,6....N"<<endl;
			cin>>y;
			cout<<"Result : "<<pow(a,(double)(1.0/y));
			mem=pow(a,(double)(1.0/y));
			break;
		}
		case '/':
		{
			cout<<"Result : "<<(1.0/a);
			mem=1.0/a;
			break;
		}
		case '^':
		{
			int x;
			cout<<"Enter the Power Value : Example 2,3,4....N"<<endl;
			cin>>x;
			cout<<"Result : "<<pow(a,x);
			mem=pow(a,x);
			break;
		}
		case '!':
		{
			double fact=1;
			for(int i=1;i<=a;i++)
			{
				fact=fact*i;
			}
			cout<<"Result : "<<fact;
			mem=fact;
			break;
		}
	}
	return mem;
}

//sin,cos,tan,exp,In,Log,sinh,cosh,tanh,asin,acos,atan
double phase3()
{

	cout<<"\nYou can perform functions like :"<<endl;
	cout<<"sin,cos,tan,exp,ln,Log,sinh,cosh,tanh,";
	cout<<"asin,acos,atan "<<endl<<endl;

	double  a,PI=3.14159265,mem;
	char ch;
	cout<<"Enter the First Value"<<endl;
	cin>>a;
	cout<<"Enter the Operator"<<endl;
	cout<<"Press S : To Find out Sin Value"<<endl;
	cout<<"Press C : To Find out Cos Value"<<endl;
	cout<<"Press T : To Find out Tan Value"<<endl;
	cout<<"Press E : To Find out Exp Value"<<endl;
	cout<<"Press I : To Find ln  Function"<<endl;
	cout<<"Press L : To Find Log Function"<<endl;
	cout<<"Press 1 : To Find Out Sinh Value"<<endl;
	cout<<"Press 2 : To Find Out Cosh Value"<<endl;
	cout<<"Press 3 : To Find Out Tanh Value"<<endl;
	cout<<"Press 4 : To Find Out Asin Value"<<endl;
	cout<<"Perss 5 : To Find Out Acos Value"<<endl;
	cout<<"Press 6 : To Find Out Atan Value"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 'S':
		case 's':
		{
			cout<<"Result : "<<sin(a*PI/180);
			mem=sin(a*PI/180);
			break;
		}
		case 'C':
		case 'c':
		{
			cout<<"Result : "<<cos(a*PI/180);
			mem=cos(a*PI/180);
			break;
		}
		case 'T':
		case 't':
		{
			cout<<"Result : "<<tan(a*PI/180);
			mem=tan(a*PI/180);
			break;
		}
		case 'E':
		case 'e':
		{
			cout<<"Result : "<<exp(a);
			mem=exp(a);
			break;
		}
		case 'I':
		case 'i':
		{
			cout<<"Result : "<<log(a);
			mem=log(a);
			break;
		}
		case 'L':
		case 'l':
		{
			cout<<"Result : "<<log10(a);
			mem=log10(a);
			break;
		}
		case '1':
		{
			cout<<"Result : "<<sinh(a*PI/180);
			mem=sinh(a*PI/180);
			break;
		}
		case '2':
		{
			cout<<"Result : "<<cosh(a*PI/180);
			mem=cosh(a*PI/180);
			break;
		}
		case '3':
		{
			cout<<"Result : "<<tanh(a*PI/180);
			mem=tanh(a*PI/180);
			break;
		}
		case '4':
		{
			cout<<"Result : "<<asin(a*PI/180);
			mem=asin(a*PI/180);
			break;
		}
		case '5':
		{
			cout<<"Result : "<<acos(a*PI/180);
			mem=acos(a*PI/180);
			break;
		}
		case '6':
		{
			cout<<"Result : "<<atan(a*PI/180);
			mem=atan(a*PI/180);
			break;
		}

	}
	return mem;
}

//nPr nCr sigma
double phase4()
{
	int i,n,r,s,f1,f2,f3,f4;
	char ch;
	cout<<"\nPress p for permutation and c for combination"<<endl;
	cout<<"\nPress s for "<<(char)228<<endl;
	cout<<"\nPress a for Average "<<endl;
	cin>>ch;
	switch(ch)
	{
		case 'c':
		case 'p':
		case 'C':
		case 'P':
		{
			cout<<"Enter the value of n and r"<<endl;
			cin>>n>>r;
			if(n>=0 && r>=0 && r<=n)
			{
				f1=f2=f3=1;
				f4=n-r;
				for(i=1;i<=n;i++)
				f1=f1*i;
				for(i=1;i<=r;i++)
				f2=f2*i;
				for(i=1;i<=f4;i++)
				f3=f3*i;
				if(ch=='p' || ch=='P')
				{
					s=f1/f3;
					mem=s;
					cout<<"The permutation value is :"<<s<<endl;
				}
				else if(ch=='c' || ch=='C')
				{
						s=f1/(f2*f3);
						mem=s;
						cout<<"The combination value is :"<<s<<endl;
				}
			}
			else
			cout<<"Calculation cannot be performed"<<endl;
			break;
		}
		case 's':
		case 'S':
		case 'a':
		case 'A':
		{
			int n;
			long a[100],s=0;
			cout<<"How many numbers want to add"<<endl;
			cin>>n;
			cout<<"Please enter those numbers"<<endl;
			for(int i=0;i<n;i++)
			{
				  cin>>a[i];
				  s=s+a[i];
			}
			cout<<"\nLimit reached"<<endl<<endl;
			if(ch=='s' || ch=='S')
			{
				cout<<(char)228<<"  :"<<s<<endl;
				mem=s;
			}
			if(ch=='a' || ch=='A')
			{
				cout<<"The average of the numbers is :"<<(s/n)<<endl;
				mem=(s/n);
			}
			break;
		}
	}
	return mem;
}
/*Mainul Hassan
Deparment of CSE(18th Batch)
FSET,USTC*/


