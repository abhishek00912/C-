#include<iostream>
#include<string>
using namespace std;
class student{
private:
string name;
int roll_no;
int Present_class;
string contact_no;
public:

void setname(string name){
    this->name=name;
}
void setRollno(int rollno){
    this->roll_no=rollno;
}
void  setpresentclass(int Presentclass){

this->Present_class=Presentclass;
}

void setcontactno(string  no){
    this->contact_no=no;
}

string getname(){
    
    return name;
}
int  getroll_no(){

    return roll_no;
}
int getpresentclass(){
    return Present_class;
}
string  getcontactno(){
    return contact_no;
}

void display(){

cout<<"Name: "<<getname()<<endl<<"ROLL no:"<<getroll_no()<<endl<<"Present class :"<<getpresentclass()<<endl<<"Contact no :"<<getcontactno();


}
};
int main(){

student s1;
s1.setname("abhishek");
s1.setRollno(3223);
s1.setpresentclass(12);
s1.setcontactno("9748015694");


s1.display();
    return 0;
}