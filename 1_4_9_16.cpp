#include<iostream>
using namespace std;
int main()
{
    int i,n;

    cout<<"enter value n ";
    cin>>n;

    for(i=0; i<=n; i++)
    {
        cout<<"\t"<<i;
        cout<<"\t"<<i*i;
    }
}