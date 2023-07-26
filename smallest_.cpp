#include<iostream>
using namespace std;
class smallest{
    int x,y;
    public:
    void input()
    {
        cout<<"Enter a value :";
        cin>>x;

        cout<<"Enter b value :";
        cin>>y;
    }
    friend smallest find(smallest);
};
    smallest find(smallest l){
    if(l.x<l.y)
    {
        cout<<"largest number is :"<<l.x;
    }
    else{
        cout<<"largest number is :"<<l.y;
    }
}

int main()
{
    smallest l;
    l.input();
    find(l);
   
}