

//constructor ->hidden function that intialize the memory allocation or intialize the object

#include<iostream>
using namespace std;

class Bike{
public:
int tyresize;

Bike(){

    cout<<"constructor call:";
}


};
int main(){

    Bike tvs;//compiler call the constructor to allocate the memory allocation 
Bike honda;
    return 0;

}