#include<iostream>
using namespace std;
int main()
{
    int i,n;

    cout<<"enter value n ";
    cin>>n;

    for(i=0; i<=n; i++)
    {
        if(i%2==0)
        {
            cout<<"\t"<<i*i;
        }
        else
        {
            cout<<"\t"<<i;
        }
    }
}