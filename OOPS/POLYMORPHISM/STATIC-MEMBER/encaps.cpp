#include<iostream>
using namespace std;

class customer{
string name;
int acc_no,balance;

static int total_customer;
static int total_balance;
public:

customer(string name,int acc_no,int balance){

    this->name=name;
    this->acc_no=acc_no;
    this->balance=balance;
    total_customer++;
    total_balance+=balance;
}
void display(){


    cout<<name<<" "<<acc_no<<" "<<balance<<" "<<endl;
}
static void access(){

    cout<<"total customer :"<<total_customer<<"   total balance : "<<total_balance;

}
void deposit(int amount){

    if(amount>0){
        balance+=amount;
        total_balance+=amount;
    }
}


};
/// here we declare the  static data member outsie the class to allocate the space in memory 

int customer::total_customer=0;
int customer::total_balance=0;


int main(){

customer A1("abhishek",1,13);
customer A2("rana",2,16);


customer::access();
cout<<endl;
A1.display();
A2.display();
A1.deposit(200);
A2.deposit(800);

    return 0;
} 