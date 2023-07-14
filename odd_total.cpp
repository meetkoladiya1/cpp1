#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;

    cout<<"enter value n ";
    cin>>n;

    for(i=1; i<=n; i+=2)
    {
        sum +=i;
        cout<<"\t"<<i;
        cout<<"\t"<<sum;
    }
}