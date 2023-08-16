#include<iostream>
#include<string.h>
using namespace std;
class customer
{
      protected:
      string name,mobile_no;
      public:
      void information()
      {
         cout<<"\n\t\t <^_^><^_^><^_^><^_^><^_^> WELCOM TO MALHAR DHOSA <^_^><^_^><^_^><^_^><^_^> \n";
         cout<<"Enter customer Name: ";
         cin>>name;
         cout<<"Enter your customer Number: ";
         cin>>mobile_no;
      }

      void show_information()                               
      {
         cout<<"\n\t Name: "<<name<<endl;
         cout<<"\n\t Contact Number: "<<mobile_no<<endl;
      }
};


class Show_bill : public customer 
{
      protected :   
      double  GST, discount, Net_bill, bill_amt =0 ;
      int Bill =0, quty[5], amount[5];
      string Ditems[5];
      public :

      int Dishitem1()
      {
         cout<<"\n\tEnter Quantity: ";
         cin>>quty[0];
         Ditems[0] ="Maisur Dhosa = 90";
         return Bill = Bill + quty[0]*90;
      }

      int Dishitem2()
      {
         cout<<"\n\tEnter Quantity: "; 
         cin>>quty[1];
         Ditems[1] ="Masala Dhosa = 100";
         return Bill = Bill + quty[1]*100;
      }

      int Dishitem3()
      {
         cout<<"\n\tEnter Quantity: "; 
         cin>>quty[2];
         Ditems[2] ="Palak Paneer = 110";
         return Bill = Bill + quty[2]*110;
      }

      int Dishitem4()
      {
         cout<<"\n\tEnter Quantity: ";
         cin>>quty[3];
         Ditems[3] ="Jini Roll = 120";
         return Bill = Bill + quty[3]*120;
      }

      int Dishitem5()
      {
         cout<<"\n\tEnter Quantity: "; 
         cin>>quty[4];
         Ditems[4] ="Sweet Corn = 80";
         return Bill = Bill + quty[4]*80;
      }   

      double Show_Bill_Amount()
      { 
         return bill_amt = bill_amt + Bill;
      }



      double Show_disc()
      {
         if (bill_amt > 5000 )
        {
            return discount =(bill_amt *10)/100; 
        }
        else 
        {
            return discount= 0;
        }
      }

      double Show_GST()
      {
         return GST =( bill_amt *5)/100;  
      }

      double Show_Bill()
      {
        return Net_bill = bill_amt + GST - discount;
      }

      void Show_Net_Bill()
      {
         Show_bill_Items();
         cout<<"\n\t Total Order Price  :"<<Show_Bill_Amount()<<endl;
         cout<<"\n\t GST                :"<<Show_GST()<<endl;
         cout<<"\n\t Discount           :"<<Show_disc() <<endl;
         cout<<"\n\t Net Bill Is        :" <<Show_Bill()<<endl;
      }

      void Show_bill_Items()
      {
         int i;
         for(i=0;i<5;i++)
         {
            if(!Ditems[i].empty())
            {
               cout<<"\n\t "<<i+1<<":"<<Ditems[i]<<"\t\t\t"<<quty[i]<<endl;
            }
         }
      }
};

int main ()
{
   Show_bill a;
   a.information();

      cout<<"\n\t\t\t  <*_*><*_*><*_*><*_*><*_*> Menu <*_*><*_*><*_*><*_*><*_*> \n";

      cout<<"\n\t [1]Maisur Dhosa    : RS. 90  /- \n"; 
      cout<<"\n\t [2]Masala Dhos     : RS. 100 /- \n"; 
      cout<<"\n\t [3]Palak Paneer    : RS. 110 /- \n"; 
      cout<<"\n\t [4]Jimi Roll       : RS. 120 /- \n";
      cout<<"\n\t [5]Sweet Corn      : RS. 80  /- \n";
      cout<<"\n\t Confirm Your Order     [0] \n";

      cout<<"----------------------------------------------------------------";

   int choice ;
   do
   {
      cout<<"\n Enter your choice : ";
      cin>>choice;
      switch (choice)
      {
         case 1: 
            a.Dishitem1();
               //cout<<"\n\t [1] Maisur Dhosa: RS. 90 \n";
            break;
         case 2: 
            a.Dishitem2();
               //cout<<"\n\t [2] Masala Dhosa: RS. 100 \n";
            break;
         case 3: 
            a.Dishitem3(); 
               //cout<<"\n\t [3] Palak Paneer: RS. 110 \n";
            break;
         case 4: 
            a.Dishitem4();
               //cout<<"\n\t [4] Jimi Roll: RS. 120\n";
            break;
         case 5: 
            a.Dishitem5();
               //cout<<"\n\t [5] Sweet Corn: RS. 80 \n";
            break;
         case 0: 
            break;
      }
   }  while(choice!=0);
   
         cout<<" ------------------------------------------------------------------------------------- ";
         cout<<"\n <^_^><^_^><^_^><^_^><^_^> WELCOM TO MALHAR DHOSA <^_^><^_^><^_^><^_^><^_^> \n";

      a.show_information();
      a.Show_Net_Bill();
      cout<<"\t----------------------------- THANK YOU -----------------------------";
}