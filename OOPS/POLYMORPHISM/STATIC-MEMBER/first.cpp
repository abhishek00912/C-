#include<iostream>
using namespace std;

class customer{
string name;
int acc_no,balance;
static int total_customer;
static int total_balance;
// static int total_no;

public:

customer(string name,int acc_no,int balance){

    this->name=name;
  this-> acc_no =acc_no;
  this->balance=balance;
  total_customer++;
  total_balance+=balance;

}
void display(){

    cout<<name<<" "<<acc_no<<" "<<balance<<" "<<total_customer<<endl;
}
void deposit(int amount){

    if(amount>0){
        balance+=amount;
        total_balance+=amount;
    }


}
void withdrawl(int amount){
if(amount<=balance && amount>0){
    balance-=amount;
    total_balance-=amount;
}


}
static void accessStatic(){   // static member function 

cout<<" total customer :"<<total_customer<<endl;
cout<<" total balance "  <<total_balance<<endl;

}

};

int customer::total_customer=0;  // here  we declare static data member outside the class

int customer::total_balance=0;
int main(){

customer A1("abhishek",12,234);
customer A2("rana ",13,890);

// A1.display_total();
// A2.display_total();
customer A3("amit ",14,8910);
// A3.display();
customer::accessStatic();
// A3.display_total();
A1.deposit(200);
// A2.withdrawl(20);
// A3.withdrawl(2000);
customer::accessStatic();

    return 0;
}