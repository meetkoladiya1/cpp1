/* constructor => class name and function name both same
               => always public section 
               => no return type and no return value
               => automically called when object is create
               => type -> default,parameterized,copy

*/

#include<iostream>
using namespace std;
class Test{
    int a=5, b=10;
    public:
    Test()
    {
        cout<<"Test class called..."<<endl;
        cout<<"Product of a and b is : "<<a*b<<endl;

    }
    Test(int m)
    {
        cout<<"Value of m is :"<<m<<endl;
    }
};
int main()
{
    Test t,b(10);
}