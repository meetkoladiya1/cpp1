#include<iostream>
using namespace std;
class base{
    protected:
    int n;
    public:
    void setdata()
    {}
};
class derived1 : public base{
    public:
    void table()
    {
        int i,n;
        cout<<"Enter value n: "<<endl;
        cin>>n;
        for(i=1; i<=10; i++)
        {
           cout<<n<<"x"<<i<<"="<<n*i<<endl;
        }
    }
}; 
class derived2 : public base
{
    public:
    void reverse()
    {
        int j,n;
        cout<<"Enter n value: ";
        cin>>n;
        for(j=n; j>=1; j--)
        {
            cout<<"\t"<<j<<endl;;
        }
    }
};
int main()
{
    derived1 m;
    m.table();

    derived2 n;
    n.reverse();
}