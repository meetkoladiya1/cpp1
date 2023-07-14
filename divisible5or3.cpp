#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter value n :";
    cin>>n;

    if(n%5==0&&n%3==0)
    {
        cout<<"divided by 5 or 3 :"<<n;
    }
    else
    {
        cout<<"not divided by 5 or 3 :"<<n;
    }
}