#include<iostream>
using namespace std;
class test
{
    int arr[5];
    public:
    void get(){
    cout<<"Enter 5 number:";
    for(int i=0;i<5; i++)
    cin>>arr[i];

}
void display()
{
    cout<<"Your number are:";
    for(int i=0;i<5;i++)
    cout<<arr[i]<<' ';
    cout<<endl;
}
};
int main()
{
    test obj;
    obj.get();
    obj.display();
    return 0;
}
