#include<iostream>
using namespace std;
class cir{
    private:
    int r;
    public:
    void setdata(int,int);
    int getarea()
    {
            return r*r;
    }
    friend cir operator++(cir b)
    {
        cir t;
        t.r=++b.r; 
        t.r=++b.r;
        return t;
    }
};
void cir :: setdata(int x,int y)
{
   r=x,r=y;
}
int main()
{
    cir m,a,c;
    m.setdata(1,2);
    cout<<"area of circle is :"<<m.getarea()<<endl;
    a.setdata(3,4);
    cout<<"area of circle is :"<<a.getarea()<<endl;

    c= ++a;   
    cout<<"area of circle is :"<<c.getarea()<<endl;
}