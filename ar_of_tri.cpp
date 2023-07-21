#include<iostream>
using namespace std;
class triangle{
    int h=5,b=5;
    public:

    triangle()
    {
        cout<<"show that area of triangle is:"<<endl;
    }
    void getdata()
    {
        cout<<"height is:"<<endl;
        cout<<"breadth is:"<<endl;
    }
    ~triangle()
    {
        cout<<"area of triangle is: "<<(h*b)/2;
    }
};

int main()
{
    triangle t;
    t.getdata();
}