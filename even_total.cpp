#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;

    cout<<"enter value n ";
    cin>>n;

    for(i=0; i<=n; i+=2)
    {
        sum+=i;
        cout<<"\t"<<i;
        cout<<"\t"<<sum;
    }
}