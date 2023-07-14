#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter value n :";
    cin>>n;

    if(n%5==0)
    {
        cout<<"divided by 5 :"<<n;
    }
    else
    {
        cout<<"not divided by 5 :"<<n;
    }
}