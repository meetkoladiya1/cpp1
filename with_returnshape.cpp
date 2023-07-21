#include<iostream>
using namespace std;
class area{

    public:

    int test(int a)
    {
        return a*a;
    }
    int test (int l,int w)
    {
        return l*w;
    }
    double test (double t,double r)
    {
        return (t*r/2);
    }
    int  test (int a, int b, int c)
    {
        return (a*b*c);
    }
};


int main()
{
    area h;
    cout<<"area of square :"<<h.test (10)*3.14<<endl;
    cout<<"area of retuangle :"<<h.test(10,3)<<endl;
    cout<<"area of triangle :"<<h.test(10.3,10.3)<<endl;
    cout<<"simple interst :"<<h.test(12,34,4)/100<<endl;


}