#include<iostream>
using namespace std;
class largest{
    int x,y;
    public:
    void input()
    {
        cout<<"Enter a value :";
        cin>>x;

        cout<<"Enter b value :";
        cin>>y;
    }
    friend largest find(largest l);
};
largest find (largest l){
    if(l.x>l.y)
    {
        cout<<"largest number is :"<<l.x;
    }
    else{
        cout<<"largest number is :"<<l.y;
    }
}

int main()
{
    largest l;
    l.input();
    find(l);
   
}