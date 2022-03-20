#include<iostream>

using namespace std;

int main(){
    int n;

    cin>>n;
    if(n>=3)
        cout<<"NO"<<endl;
    else if (n<=1)
    cout<<"YES"<<endl;
    else{
        int a[3];

        for(int i=0;i<3;i++) cin>>a[i];

        if(a[1]*a[1]-4*a[0]*a[2] < 0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }

    return 0;
}
