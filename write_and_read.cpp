#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // write file
    char input[50];
    ofstream os;
    
    os.open("hello.txt");
    cout<<"writing to a text file: "<<endl;
    cout<<"please enter your name: "<<endl;
    cin.getline(input,100);
    os<<input<<endl;
    cout<<"please Enter contact number: "<<endl;
    cin>>input;
    cin.ignore();
    os<<input<<endl;
    os.close();

    // read file
    ifstream is;
    string line;
    is.open("hello.txt");
    cout<<"Reading from a text file: "<<endl;
    while(getline(is,line))
    {
        cout<<line<<endl;
    }
    is.close();
    return 0;
}