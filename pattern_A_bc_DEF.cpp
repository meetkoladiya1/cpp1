#include<iostream>
using namespace std;
int main()
{
    char i,j,k=65,l=1;

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {

            if(l%2==0)
            {
                cout<<k+32;
            }
            else
            {
                cout<<k;
            }
            k++;
            cout<<"\t"<<j;
        }
        l++;
        cout<<"\n";
    }
}