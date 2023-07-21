// function overloading
#include<iostream>
using namespace std;
class hello{
    public:
    int test(int a)
    {
        return a*a;
    }
    int test(int a,int b)
    {
        return a*b;
    }
    double test(double a)
    {
        return a*a*a;
    }
    int test(int a,int b,int c)
    {
        return a+b+c;
    }
};

int main()
{
    hello h;
    cout<<"Addition of a,b and c is: "<<h.test(5,3,6)<<endl;
    cout<<"cube is a of is: "<<h.test(5.3)<<endl;
    cout<<"recteng le of a and b is: "<<h.test(4,2)<<endl;
    cout<<"double of a is: "<<h.test(4.32)<<endl;
}