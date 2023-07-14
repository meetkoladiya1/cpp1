#include<iostream>
using namespace std;
int main()
{
    char i,j;

    for(i=65; i<=69; i++)
    {
        for(j=69; j>=65; j--)
        {
            cout<<"\t"<<i;
        }
        cout<<"\n";
    }
}