#include<iostream>
using namespace std;
class req{
    int a;
    protected:
    int b;
    public:
    void test()
    {}
};

class derived : public req
{
    public:
    int getdata()       
    {
        int i,n;
        cout<<"enter value n ";
        cin>>n;
        if(i%2==0)
        {
            cout<<"\t"<<i*i;
        }
        else
        {
            cout<<"\t"<<i;
        }
    }
};   
int main()
{
    derived m;
    m.test();
    m.getdata();
}