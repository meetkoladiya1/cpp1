#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream hello("abc.txt");
    if(hello.is_open())
    {
        hello<<"CPP language";
        hello<<"\n Wel-come to skill qode";
        hello<<"\n We started new lab";
        hello<<"\n we started new branch";
        hello.close();
    }
    else{
        cout<<"File opening is fail.";
        return 0;
    }
}