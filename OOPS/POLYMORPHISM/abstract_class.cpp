#include<iostream>
using namespace std;

class vehicle{
public:
int tyresize;
int enginesize;

 virtual void show(){

    cout<<" base class vehicle called ";
}
virtual void calculatemilege()=0;    // pure virtual function 
virtual void refuel()=0;
    // cout<<"Milege calculated "<<endl;


};
class bike : public vehicle{
public:
int handlesize;

void calculatemilege(){
    cout<<"Bike ka show "<<endl;
}
void refuel(){
cout<<"refuel"<<endl;

}

};
int main(){
// vehicle is now abstract clas 
    vehicle v ;
    bike b;
    v.calculatemilege();
    
    
    // cout<<sizeof(v)<<endl;
    //    cout<<sizeof(b)<<endl;

    
    
    
    // here c mai to koi virtual use kiye nhi then why it calling the correct object  (show) q ki ek mai parent class mai virtual declare hai then sabhi child class mai rahega 



    return 0;
}