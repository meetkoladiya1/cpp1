#include<iostream>
using namespace std;
int main()
{
    int i,j;

    for(i=2; i<=10; i+=2)
    {
        for(j=5; j>=0; j--)
        {
            cout<<"\t"<<i;
        }
        cout<<"\n";
    }
}