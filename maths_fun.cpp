/*      
    ceil    ->round up
    floor   ->round down
    round   ->rounded
    sqrt    ->square root
    abs     ->absolute value
    pow(x,y) ->x to power y
    rand()  ->rendom value genrate
*/

#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
    cout<<"Ans is: "<<ceil(2.8)<<endl;
    cout<<"Ans is: "<<ceil(-2.2)<<endl;
    cout<<"Ans is: "<<floor(2.8)<<endl;
    cout<<"Ans is: "<<floor(-2.2)<<endl;
    cout<<"Ans is: "<<round(2.5)<<endl;
    cout<<"Ans is: "<<round(-2.2)<<endl;
    cout<<"Ans is: "<<sqrt(16)<<endl;
    cout<<"Ans is: "<<sqrt(5)<<endl;
    cout<<"Ans is: "<<abs(16)<<endl;
    cout<<"Ans is: "<<abs(5)<<endl;
    cout<<"Ans is: "<<pow(2,5)<<endl;
    cout<<"Ans is: "<<rand()%100<<endl;
};

