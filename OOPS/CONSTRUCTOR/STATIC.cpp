#include<iostream>
using namespace std;

class Bike{
public:
static int noOfbikes;  // thsi belongs to the class . it is not depend on the object
int tyresize;

void setnoOfbikes(int no){

noOfbikes=no;
noOfbikes++;
}
Bike(int tyresize){

    this->tyresize=tyresize;
    // cout<<"constructor call:";
}
static void increasenoOfbikes(){
    noOfbikes++;
}

};
// void print(){ // static through function
//  static int b=10;
// cout<<b<<endl;
// b++;


// }
int Bike ::noOfbikes=10;
int main(){

    // print();
    // print();
    // print();

    Bike tvs(23);//compiler call the constructor to allocate the memory allocation 
Bike honda(34);


cout<<tvs.noOfbikes<<endl;

cout<<honda.noOfbikes<<endl;
  return 0;

}