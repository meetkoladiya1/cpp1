#include<iostream>
using namespace std;
class squ{
    private:
    int a;
    public:
    void setdata(int,int);
    int getarea()
    {
            return a*a;
    }
    friend squ operator++(squ b)
    {
        squ t;
        t.a=++b.a; 
        t.a=++b.a;
        return t;
    }
};
void squ :: setdata(int x,int y)
{
   a=x,a=y;
}
int main()
{
    squ r,a,c;
    r.setdata(1,2);
    cout<<"area of square is :"<<r.getarea()<<endl;
    a.setdata(3,4);
    cout<<"area of square is :"<<a.getarea()<<endl;

    c= ++a;   
    cout<<"area of square is :"<<c.getarea()<<endl;
}