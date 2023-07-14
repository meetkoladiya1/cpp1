#include<iostream>
using namespace std;
int main()
{
    int a,b,largest;
    cout<<"enter a:";
    cin>>a;

    cout<<"enter b:";
    cin>>b;

    if(a>b)
    {
        largest=a;
    }
    else
    {
        largest=b;
    }
    cout<<"smallest number of two value is :"<<largest;
}