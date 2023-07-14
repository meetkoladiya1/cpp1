#include<iostream>
using namespace std;
int main()
{
    int a,s,e,total,n;
    float per;

    cout<<"enter vlue a ";
    cin>>a;

    cout<<"enter value s ";
    cin>>s;

    cout<<"enter value e ";
    cin>>e;

    total=a,s,e;
    per=(total*100)/300;
    cout<<"per=%.2f"<<per;

    if(n<33)
    {
        cout<<"student is pass :"<<total;
    }
    else
    {
        cout<<"student is not pass :"<<total;
    }
}