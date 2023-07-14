#include<iostream>
using namespace std;
int main()
{
    int i,n;

    cout<<"enter value n ";
    cin>>n;

    for(i=1; i<=n; i+=i)
    {
        cout<<"\n"<<i;
    }
}