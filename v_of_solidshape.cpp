#include<iostream>
using namespace std;
class Solid
{
    int l=5,w=10,h=8;
    public:
    Solid()
    {
        cout<<"show that volum of solid: "<<endl;
    }
    void getdata()
    {
        cout<<"Enter length value is:"<<endl;
        
        cout<<"Enter wedth value is:"<<endl;
        
        cout<<"Enter height value is:"<<endl;
       
    }
    ~Solid()
    {
        cout<<"volum of solid is: "<<l*w*h<<endl;
    }
};

int main()
{
    Solid s;
    s.getdata();
}