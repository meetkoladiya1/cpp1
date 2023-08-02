#include<iostream>
using namespace std;
class base{
    protected:
    int a;
    public:
    void setA()
    {
        cout<<"Enter a: ";
        cin>>a;
    }
};
class Test : public base{
    protected:
    int b;
    public:
    void setB()
    {
        cout<<"Enter b: ";
        cin>>b;
    }
};
class direved : public Test
{
    public:
    void product()
    {
        cout<<"product of a and b: "<<a*b<<endl;
    }
};
int main()
{
    direved d;
    d.setA();
    d.setB();
    d.product();
}