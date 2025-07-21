#include<iostream>
using namespace std;

class  customer{
string name;
int balance,acc_no;

public:

customer(string name,int balance,int acc_no){

    this->name=name;
    this->balance=balance;
    this->acc_no=acc_no;
}
void deposit(int amount){
if(amount>0){
balance+=amount;
    cout<<amount<<"rs : amount is credited\n";
}
else{

   throw "amount should be grater than 0\n";
}

}
 

void withdraw(int amount){

    if(amount>0 && amount<=balance){

        balance-=amount;
        cout<<amount<<"rs is debited succesfully\n";
    }
    else if(amount<0){
    
        throw "amount  should be grater than 0";
    }
    else {
      throw  "Your balance is low";
    }
}

};

int main()
{
    try {
 customer c1("abhishek",500,12);
 c1.deposit(100);
 c1.withdraw(5000);

    }
    catch(const char *e){

        cout<<"Exception occured:"<<e<<endl;

    }
    return 0;
}