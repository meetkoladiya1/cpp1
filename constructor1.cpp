/*  constructor  =>class name and function name same both
                => always public section 
                => no return type and no return value
                => automically called when object is create
                =>identifiy ~(tild sign)
*/
#include<iostream>
using namespace std;
class Test{
    int a=5,b=10;
    public:

    Test()      //default constructor
    {
        cout<<"Test class called..... "<<endl;
    }
    void getdata()
    {
        cout<<"product of a and b is: "<<a*b<<endl;
    }
    ~Test()      //constructor
    {
        cout<<"Test class destructor called...."<<endl;
    }
};

int main()
{
    Test t;
    t.getdata();
}