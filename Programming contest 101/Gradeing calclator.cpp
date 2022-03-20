#include<iostream>
using namespace std;
int main ()
{
int sub1,sub2,sub3,sub4,sub5,sub6,total;
float average;
cout<<"Enter the numbers of Six subject of a Student :\n";
cin>>sub1>>sub2>>sub3>>sub4>>sub5>>sub6;
   total=sub1+sub2+sub3+sub4+sub5+sub6;
   average=total/6;
   if(average>=80)
     cout<<"Student has got: A+ Grade\n";
  else if(average>=75)
     cout<<"Student has got: A Grade\n";
  else if(average>=70)
     cout<<"Student has got: A- Grade\n";
  else if(average>=65)
     cout<<"Student has got: B+ Grade\n";
  else if(average>=60)
     cout<<"Student has got: B Grade\n";
  else if(average>=55)
     cout<<"Student has got: B- Grade\n";
  else if(average>=50)
     cout<<"Student has got: C+ Grade\n";
  else if(average>=45)
     cout<<"Student has got: C Grade\n";
  else if(average>=40)
     cout<<"Student has got: D Grade\n";
  else
     cout<<"Student has got: F Grade\n";
return 0;
}

