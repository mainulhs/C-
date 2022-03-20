#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        double ssc,hsc,phy,eng,math,aphy,aeng,amath,viva,res,total;
        cin>>ssc;
        cin>>hsc;
        cin>>phy>>eng>>math;
        cin>>viva;
        aphy = (phy * 70)/100;
        aeng = (eng * 60)/100;
        amath = (math * 80)/100;
        if(ssc != 2.50 && hsc != 2.50)
        {
            cout<<"Sorry!!!You are not eligible\n";
            if(phy <= 30 && eng <= 30 && math <= 40 && viva <= 20)
            {
                total = (aphy+aeng+amath+viva);
                cout<<total<<endl;
                res= (double)((aphy+aeng+amath+viva)*100)/120;
                cout<<fixed<<setprecision(2)<<res<<endl;
            }
            else
             cout<<"You are Knocked out\n";
        }
    }
}
