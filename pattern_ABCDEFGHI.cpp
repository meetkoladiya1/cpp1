#include<iostream>
using namespace std;
int main()
{
    int i,j;
    char ch='A';

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            cout<<"\t"<<ch;

            if(ch%'Z')
            {
                ch++;
            }
            else
            {
                ch='A';
            }
        }
        cout<<"\n";
    }
}