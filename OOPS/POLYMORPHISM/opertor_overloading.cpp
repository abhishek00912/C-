#include<iostream>
using namespace std;
// class A {
//     public:
// int age;
// };
class complexNo{
public:
int imaginary;
int real; 

 complexNo  add(complexNo &c1){

    complexNo c3;

    c3.imaginary=c1.imaginary+this->imaginary;
    c3.real= c1.real + this->real;

    return c3;
 }

};
int main(){

    complexNo a1,a2;

a1.imaginary=10;
a1.real=5;
a2.imaginary=2;
a2.real=3;

complexNo a3;

a3 = a1.add(a2);

// a3.real=a1.real+a2.real;
// a3.imaginary=a1.imaginary + a2.imaginary;

cout<<"real :"<<a3.real <<" " <<" imaginary :"<<a3.imaginary<<endl;
    return 0;
}