#include<iostream>
#include<string>
using namespace std;

class vehicle{
    public:    // base class
int tyresize;
int enginesize;
int lights;
string company_name;

void showcomapny()
{
    cout<<"company name:"<<company_name<<endl;
}
vehicle(){

    cout<<"vehicle constructor call:"<<endl;
}


};

class car :public vehicle{ // derived class 
    public:
int steeringsize;
    
};
class bike :public vehicle{    // derived class
    public:
int handlesize;

bike(){
cout<<"bike constructor call:";
}
};

class A{
private:
int a_ka_private;   // cant't be access from outside 
protected:
int a_ka_protected;    // cant't be access from outside 
public:   //                can be accesed from outside the class 
int a_ka_public;


};
class B : private  A{  // a se jo v ayga wo b ke liye wo ban jyga 
public:
int b_ka_public;

void show()
{
    a_ka_public;
    a_ka_protected;
}

};

int main(){
// bike honda;

// honda.handlesize=5;
// honda.tyresize=90;
// honda.enginesize=12;
// honda.lights=0011;
// honda.company_name="honda";

// bike bmw;
// bmw.company_name="bmw";
// bmw.showcomapny();


// honda.showcomapny();
// cout<<honda.company_name<<endl;


A a;
a.a_ka_public=10;

B b;




    return 0;
}