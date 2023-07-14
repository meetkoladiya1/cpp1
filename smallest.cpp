#include<iostream>
using namespace std;
int main()
{
    int a,b,small;
    cout<<"enter a:";
    cin>>a;

    cout<<"enter b:";
    cin>>b;

    if(a<b)
    {
        small=a;
    }
    else
    {
        small=b;
    }
    cout<<"smallest number of two value is :"<<small;
}