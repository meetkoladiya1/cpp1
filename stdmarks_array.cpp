#include <iostream>
using namespace std;
class student{
    float sub1,sub2,sub3,marks;
public :
int sub_marks(int marks[]) 
{
  int sub1 = marks[0];
  int sub2 = marks[1];
  int sub3 = marks[2];
  return sub1 + sub2 + sub3;
}
 };

int main() 
{
   int marks[3];

  cout<<"Enter sub mark 1: ";
   cin>>marks[0];
  cout<<"Enter sub mark 2: ";
   cin>>marks[1];
  cout<<"Enter sub mark 3: ";
   cin>>marks[2];

 
  int total_marks = sub_marks(marks);
  cout<<"Total marks: "<<total_marks<<endl;
}