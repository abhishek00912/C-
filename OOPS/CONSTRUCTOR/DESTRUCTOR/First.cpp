
// destructor called when object goes out of scope 

// here out of scope means that every variable have area where they  print ,initialize.

#include<iostream>
using namespace std;

class Bike{
public:
int tyresize;
int enginesize;

Bike(int tyresize,int enginesize){

   this-> tyresize=tyresize;
   this->enginesize=enginesize;
    cout<<"constructor call:";
}
~Bike(){

    cout<<"destructor called :";
}

};
int main(){

    Bike tvs(40,100);//compiler call the constructor to allocate the memory allocation 
Bike honda(23,101);
Bike royalenfield(13,102);
// tvs.tyresize
bool flag;
if(flag==true){
Bike bmw( 17,10000);
cout<<bmw.tyresize<<" "<<bmw.enginesize<<endl;

}


cout<<tvs.tyresize<<endl;
cout<<honda.tyresize<<endl;
cout<<royalenfield.tyresize<<endl;

cout<<tvs.enginesize<<endl;
cout<<honda.enginesize<<endl;
cout<<royalenfield.enginesize<<endl;


    return 0;

}