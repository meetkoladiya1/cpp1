#include<iostream>
using namespace std;
class base1{
    protected:
    int a;
    public:
    void setA()
    {
        cout<<"Enter a: ";
        cin>>a;
    }
};
class base2{
    protected:
    int b;
    public:
    void setB()
    {
        cout<<"Enter b: ";
        cin>>b;
    }
};
class direved : public base1, protected base2
{
    public:
    void product()
    {
        base2 ::setB();
        cout<<"product of a and b: "<<a*b<<endl;
    }
};
int main()
{
    direved d;
    d.setA();
    //d.setB();
    d.product();
}