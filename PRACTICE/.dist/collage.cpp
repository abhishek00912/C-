#include<iostream>
#include<string>
using namespace std;

class student {
    private:
   long long  int id= 20100100100;
    float  marks=0;
 
    public:
    string name;

    void setid(long long int i){
        id=i;
    }
    void setmarks(float m){

        marks=m;
    }
    long long int  getid(){

        return id;

    }
    float getmarks(){
        return marks;
    }

};



int main(){

student s1;
student s2;
s1.setid( 20100100111);
s1.setmarks(98.0);
s1.name="abhishek";

s2.name="amit";
s2.setid( 20100100121);
s2.setmarks(90.0);

cout<<"student 1st information :\n";
cout<<"Name:"<<s1.name<<endl;
cout<<"ID:"<<s1.getid()<<endl;
cout<<"Marks :"<<s1.getmarks()<<endl;


cout<<"student 2 information :\n";
cout<<"Name  :"<<s2.name<<endl;
cout<<"student id:"<<s2.getid()<<endl;
cout<<"marks :"<<s2.getmarks()<<endl;







    return 0;
}