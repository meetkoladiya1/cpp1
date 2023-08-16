#include<iostream>
using namespace std;
class factorial1
{
    protected:
    int a;
    public:
    void baseA()
    {}
};
class factorial2 : public factorial1
{
    protected:
    int b;
    public:
    void baseB()
    {}
};
class derived : public factorial2
{
    public:
    int getdata()
    {
        int value,fact=1,i;

        cout<<"ENter any number ";
        cin>>value;
         for(i=1;i<=value;i++)
        {    
         fact=fact*i;    
        }    
        cout<<"Factorial of " <<value<<" is: "<<fact<<endl;  
    }    
};
int main()
{
    derived m;
    m.baseA();  
    m.baseB();
    m.getdata();
}
