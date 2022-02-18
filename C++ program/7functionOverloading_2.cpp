#include <iostream>
#include <iomanip>

using namespace std;

class bankAccount
{
    char name[20];
    int acno;
    char actype[20];
    int bal;
    float roi=4.0;
public :
    void newAccount();
    void deposit();
    void withdraw();
    void display();
    void calculateInterest();
    void calculateInterest(float interest);

};


void bankAccount :: newAccount()
{
cout<<endl<<endl;
cout<<"Enter Name :-";
cin>>name;
cout<<"Enter A/c no. :-";
cin>>acno;
cout<<"Enter A/c Type :-";
cin>>actype;
cout<<"Enter Opening Balance:-";
cin>>bal;
}

void bankAccount :: deposit()
{
cout<<"Enter Deposit amount :-";
int deposit=0;
cin>>deposit;
bal=deposit+bal;
cout<<"\nDeposit Balance = "<<bal;
}

void bankAccount :: withdraw()
{
int withdraw;
cout<<"\nBalance Amount = "<<bal;
cout<<"\nEnter Withdraw Amount :-";
cin>>withdraw;
bal=bal-withdraw;
cout<<"After Withdraw Balance is "<<bal;
}

void bankAccount :: display()
{
cout<<endl<<endl<<endl;
cout<<setw(50)<<"DETAILS"<<endl;
cout<<setw(50)<<"name "<<name<<endl;
cout<<setw(50)<<"A/c. No. "<<acno<<endl;
cout<<setw(50)<<"A/c Type "<<actype<<endl;
cout<<setw(50)<<"Balance "<<bal<<endl;
}

 void bankAccount ::calculateInterest()
{
   cout<<<<setw(50)"Interest earned"<<(bal*3*roi)/100; 
}

 void bankAccount ::calculateInterest(float r)
{   roi = r;
    cout<<<<setw(50)"Interest earned"<<(bal*3*roi)/100;
}


int main()
{
 bankAccount acc1;
 acc1.newAccount();
 acc1.deposit();
 acc1.withdraw();
 acc1.display();
 acc1.calculateInterest();

 bankAccount acc2;
 acc2.newAccount();
 acc2.deposit();
 acc2.withdraw();
 acc2.display();
 acc2.calculateInterest(5.0);
 
}

   




