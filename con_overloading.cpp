// constructor overloading
#include<iostream>
using namespace std;
class test{
    public:
    test()
    {
        cout<<"Default constuctor is called....."<<endl;
    }
    test(int a)
    {
        cout<<"value of a is: "<<a<<endl;
    }
    test(int a,int b)
    {
        cout<<"Addition of a and b is: "<<a+b<<endl;
    }
    test(int a,int b,int c)
    {
        cout<<"product a, b and c is: "<<a*b*c<<endl;
    }
};
int main()
{
    test t,a('A'),c(200,10),d(1,2,3),b(50);
}