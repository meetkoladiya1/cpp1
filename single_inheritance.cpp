#include<iostream>
using namespace std;
class Base{
    int a;
    protected:
    int b;
    public:
    void hello()
    {
        cout<<"hello....."<<endl;
    }
};

class derived : public Base
{
    public:
    void test()
    {
        Base :: b=10;
        cout<<"hello world"<<endl;
        cout<<"B :"<<b<<endl;
    }
};

int main()
{
    derived d;
    d.hello();
    d.test();
}