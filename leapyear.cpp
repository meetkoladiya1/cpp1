#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter day n ";
    cin>>n;

    if(n<365)
    {
        cout<<"not leap year :"<<n;
    }
    else    
    {
        cout<<"leap year:"<<n;
    }
}