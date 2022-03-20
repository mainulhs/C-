#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int temp;
    cout << "Enter temperature: ";
    cin >> temp;
    if((temp>=0)&&(temp<=10))
        cout << "FREEZING";
    else if((temp>=11)&&(temp<=20))
        cout << "VERY COLD";
    else if((temp>=21)&&(temp<=30))
        cout << "WARM";
    else if((temp>=31)&&(temp<=50))
        cout << "VERY HOT";
 //Coding by Sumon
    return 0;
}
