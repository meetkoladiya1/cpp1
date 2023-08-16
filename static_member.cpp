#include<iostream>
using namespace std;
class bank{
    int bal;
    string name;
    public:
    static int a;                   //declare
    void setdata(int bal, string name)
    {
        this->bal = bal;
        this->name = name;
        a++;
    }
    static int mem()
    {
        return a;
    }
    void getdata()
    {
        cout<<"Your name is: "<<name<<endl;
        cout<<"Your balance is: "<<bal<<endl;
    }
};
int bank :: a;
int main()
{
    cout<<"intial stage: "<<bank :: a<<endl;
    bank b,c;
    b.setdata(15000, "skill");
    c.setdata(15000, "skill");
    b.getdata();
    cout<<"final stage: "<<bank :: a<<endl;
};