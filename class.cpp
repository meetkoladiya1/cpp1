#include<iostream>
using namespace std;
class Test{
    private:
    int i;

    public:
    int a;
    void hello()
    {
        cout<<"Hello"<<endl;
        i=5;
    }
    void getI()
    {
        cout<<"value of i: "<<i<<endl;
    }
};

int main()
{
    Test z;
    z.a=10;
    cout<<"value of a: "<<z.a<<endl;
    z.getI();
    z.hello();
    z.getI();
}
// yes no