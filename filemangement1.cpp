//file management
// ofstream: stream class to write on file
// ifstream: stream class to read from file 
// ffstream:  stream class to both read and write from/to files
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream hello("abc.txt");
    if(hello.is_open())
    {
        hello<<"CPP language";
        hello<<"\nWel-come to skill qode";
        hello<<"\nwe started new lab";
        hello<<"\nwe started new branch";
        hello.close();
    }
    else{
        cout<<"File opening is fail.";
        return 0;
    }
}
