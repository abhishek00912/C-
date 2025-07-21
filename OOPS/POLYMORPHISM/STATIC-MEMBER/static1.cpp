#include<iostream>
using namespace std;

class Student{
string name;
int roll;
static int  countNo;

public:
Student(string name,int roll){

    this->name=name;
    this->roll=roll;
       countNo++;
}

static void access(){

    cout<<"  total no is : "<<countNo<<endl;

}


};

int Student::countNo=0;



int main(){

Student s1("ABHISHEK",12);
Student s2("Amit",15);
Student s3("Aminaash",1234);

Student::access();






return 0;

}