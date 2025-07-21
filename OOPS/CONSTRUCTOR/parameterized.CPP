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


};
int main(){

    Bike tvs(40,100);//compiler call the constructor to allocate the memory allocation 
Bike honda(23,101);
Bike royalenfield(13,102);
// tvs.tyresize

cout<<tvs.tyresize<<endl;
cout<<honda.tyresize<<endl;
cout<<royalenfield.tyresize<<endl;

cout<<tvs.enginesize<<endl;
cout<<honda.enginesize<<endl;
cout<<royalenfield.enginesize<<endl;


    return 0;

}