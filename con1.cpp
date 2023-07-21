#include<iostream>
using namespace std;
class marksheet
{
    int m,s,g,total;
    float per;
    char sname[20];

    public:
    marksheet() 
    {
        cout<<"Student name:";
        cin>>sname;
        cout<<"Maths marks: ";
        cin>>m;
        cout<<"Science marks: ";
        cin>>s;
        cout<<"Gujarati marks: ";
        cin>>g;
        total=m+s+g;
        per=(total*100)/300;
    }

    void display()
    {
        cout<<"Student name:"<<sname<<endl;
        cout<<"Maths marks:"<<m<<endl;
        cout<<"Science marks:"<<s<<endl;
        cout<<"Gujarati marks:"<<g<<endl;
        cout<<"Total:"<<total<<endl;
        cout<<"percentage:"<<per<<endl;
    }
};

    int main()
    {
        marksheet m;
        m.display();
    }
