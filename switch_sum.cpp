#include<iostream>
using namespace std;
int main()
{
    int a,b,c;

    cout<<"enter value a :";
    cin>>a;

    cout<<"enter value b :";
    cin>>b;

    cout<<"enter value c :";
    cin>>c;

    switch (c)
    {
        case 1:
        cout<<"ans is a+b"<<a+b;
        break;

        case 2:
        cout<<"ans is a-b"<<a-b;
        break;

        case 3:
        cout<<"ans is a*b"<<a*b;
        break;

        case 4:
        cout<<"ans is a/b"<<a/b;
        break;

        case 5:
        cout<<"ans is a%b"<<a%b;
        break;

        default:
        cout<<"incorrect value ";
    }
}