//Code Writer
//**Mainul Hassan**
//Department of CSE USTC
#include<iostream>
using namespace std;
int main()
{
    long long int n,a,b,c,x,y,z;
    while(cin>>a>>b)
    {
        n=a/b;
        cout<<"["<<n<<";";
        c=a%b;
        while(c!=0)
        {
            x=b;
            y=c;
            n=x/y;
            cout<<n;
            c=x%y;
            if(c>0)
            {
                cout<<",";
                b=y;
            }
        }
        cout<<"]"<<endl;
    }
    return 0;
}
