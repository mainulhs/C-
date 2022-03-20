#include<iostream>
using namespace std;
int main()
{
    int date,month;
    cout<<"Enter the date :";
    cin>>date;
    cout<<"Enter the month :";
    cin>>month;
    if((date>=21 && date<=31 && month==3) || (date>=1 && date<=20 && month ==4))
    cout<<"Your Star Sign is : Aries"<<endl;
    if((date>=21 && date<=31 && month==4) || (date>=1 && date<=21 && month ==5))
    cout<<"Your Star Sign is : Taurus"<<endl;
    if((date>=22 && date<=31 && month==5) || (date>=1 && date<=21 && month ==6))
    cout<<"Your Star Sign is : Gemini"<<endl;
    if((date>=22 && date<=31 && month==6) || (date>=1 && date<=22 && month ==7))
    cout<<"Your Star Sign is : Cancer"<<endl;
    if((date>=23 && date<=31 && month==7) || (date>=1 && date<=22 && month ==8))
    cout<<"Your Star Sign is : Leo"<<endl;
    if((date>=23 && date<=31 && month==8) || (date>=1 && date<=23 && month ==9))
    cout<<"Your Star Sign is : Virgo"<<endl;
    if((date>=24 && date<=31 && month==9) || (date>=1 && date<=23 && month ==10))
    cout<<"Your Star Sign is : Libra"<<endl;
    if((date>=24 && date<=31 && month==10) || (date>=1 && date<=22 && month ==11))
    cout<<"Your Star Sign is : Scorpio"<<endl;
    if((date>=23 && date<=31 && month==11) || (date>=1 && date<=22 && month ==12))
    cout<<"Your Star Sign is : Sagittarius"<<endl;
    if((date>=23 && date<=31 && month==12) || (date>=1 && date<=20 && month ==1))
    cout<<"Your Star Sign is : Capricorn"<<endl;
    if((date>=20 && date<=31 && month==1) || (date>=1 && date<=19 && month ==2))
    cout<<"Your Star Sign is : Aquaris"<<endl;
    if((date>=20 && date<=31 && month==2) || (date>=1 && date<=20 && month ==3))
    cout<<"Your Star Sign is : Pisces"<<endl;
    return 0;
}
