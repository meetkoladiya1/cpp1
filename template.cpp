#include<iostream>
using namespace std;
template<class T>
void display(T aa){
    cout<<"Display template is: "<<aa<<endl;
}

template<class X,class Y>
void add(X a,Y b){
    cout<<"Addition is: "<<a+b<<endl;
}
int main()
{
    display(15);
    display(15.25);
    display('A');
    add(2,5);
    add(2,5.7);
    add('Z',5.7);
}