#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
class employees{
private:
int imp_id;
string name;
int age;
long long int phone_no;
public:

void setimp_id(int imp_id){
    this->imp_id=imp_id;

}
void setname(string name){
    this->name=name;
}
void setage(int age){
    this->age=age;
}
void setphone_no(long long int phone_no){
    this->phone_no=phone_no;
}

int getimp_id(){

    return imp_id;
}
int getage(){

    return age;
}
string getname(){
    return name;
}

long long int getphone_no(){

    return phone_no;
}
void input(){
// cout<<"enter employee infromatiton:\n";
    cout<<"enter the name :";
getline(cin,name);
cin.ignore();

cout<<" enter the emp id :";

cin>>imp_id;
cin.ignore();
cout<<" enter the emp age : ";
cin>> age;
cin.ignore();
cout<<"enter the  mobile no : ";

cin>>phone_no;

cin.ignore();

}
}; 
void display( employees& emp){  // displaying outside the class 
// cout<<" Employess detail\n : "<<endl;
    cout<<"Name :"<< emp.getname()<<endl;
    cout<<"age :"<<emp.getage()<<endl;
    cout<<"emp_id :"<<emp.getimp_id()<<endl;
    cout<<"phone no :"<<emp.getphone_no()<<endl;


}

int main(){

    employees abhishek,amit;
    
    // abhishek.setage(20);
    // abhishek.setname("Abhishek");
    // abhishek.setimp_id(3223);
    // abhishek.setphone_no(9330422912);
cout<<"enter the first employee details :"<<endl;
    abhishek.input();
cout<<endl;
cout<<"enter the 2nd employee details :/n"<<endl;

amit.input();

cout<<" first employee details :/n"<<endl;

    display(abhishek);

cout<<" 2nd employee details :/n"<<endl;
display(amit);
    return 0;
}
