#include<iostream>
using namespace std;
class square1{
    protected:
    int a;
    public:
    void testA()
    {}
};
class square2{
    protected:
    int b;
    public:
    void testB()
    {}
};

class derived : public square1,public square2
{
    public:
    int getdata()
    {
        int i,n;
        cout<<"enter value n ";
        cin>>n;

        for(i=0; i<=n; i++)
        {
            cout<<"\t"<<i;
            cout<<"\t"<<i*i;
        }
    }
};   
int main()
{
    derived m;
    //m.testA();
    //m.testB();
    m.getdata();
}