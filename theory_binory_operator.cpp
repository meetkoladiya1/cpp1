//binar operator overloading
#include<iostream>
using namespace std;
class Box{
    int l,b,h;
    public:
    void setdata(int x,int y,int z)
    {
        l=x,b=y,h=z;
    }
    int getdata()
    {
        return l*b*h;
    }
    Box operator+(Box &n)
    {
        Box t;
        t.l=l+n.l;
        t.b=b+n.b;
        t.h=h+n.h;
        return t;
    }
};

int main()
{
    Box a,b,c;
    a.setdata(2,3,4);
    cout<<"volume of box A is :"<<a.getdata()<<endl;

    b.setdata(4,5,6);
    cout<<"volume of box B is :"<<b.getdata()<<endl;

    c=a+b;
    cout<<"volume of box C is  :"<<c.getdata()<<endl;

}