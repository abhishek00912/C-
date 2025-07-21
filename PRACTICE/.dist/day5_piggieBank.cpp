// #include<iostream>
// #include<string>
// using namespace std;

// class AddAmount{
// public:

//  int amount=50;
 
//  AddAmount(){ //  default 

//     this->amount=amount;

//  }
//  AddAmount(int amount){

//     this->amount=amount+amount;
//  }
//  void display(){

// cout<<"final amount is $ "<<amount<<endl;

//  }


// };


// int main(){

//     AddAmount add(39);

//     add.display();

//     return 0;
// }
#include <iostream>
#include <string>
using namespace std;

class AddAmount {
public:
    int amount=50; // Changed name_amount to amount for clarity

    AddAmount() { // Default constructor: no amount added
      this-> amount = amount; // Initialize to $50
    }

    AddAmount(int Amount) { // Constructor with parameter
        amount = amount + Amount; // Add the amount to the initial $50
    }

    void display() {
        cout << "Final amount is $ " << amount << endl;
    }
};

int main() {
    AddAmount add(49); // Create an object and add $39
    add.display();     // Display the final amount

    return 0;
}