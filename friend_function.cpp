#include<iostream>
using namespace std;
class Test{
    int real, img;
    public:
    void setdata(int a, int b)
    {
        real=a, img=b;
    }
    void getdata(){
        cout<<"Number is :"<<real<<" + "<<img<<"i"<<endl;
    }
    friend Test add(Test,Test);   //declar
};
    Test add(Test x, Test y)        //object as argument
    {
        Test z;
        z.real=x.real+y.real;
        z.img=x.img+y.img;
        return z;                   //object as return
    }
int main()
{
    Test t,s,p;
    t.setdata(2,3);
    t.getdata();

    s.setdata(6,7);
    s.getdata();

    p=add(t,s);
    p.getdata();

}