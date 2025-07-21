#include<iostream>
using namespace std;

class vehicle{
public:
int tyresize;
int enginesize;

 virtual void show(){

    cout<<" base class vehicle called ";
}

};
class bike : public vehicle{
public:
int handlesize;
void show(){

    cout<<"bike function called ";
}


};
// class c :public bike {
// public:
// void show()
// {
// cout<<" c ka show";
// }
// };

int main(){


    // bike *b;
    // b=new c;
    // b->show(); 
    vehicle a ;
    bike b;
    
    cout<<sizeof(a)<<endl;
       cout<<sizeof(b)<<endl;

    
    
    
    // here c mai to koi virtual use kiye nhi then why it calling the correct object  (show) q ki ek mai parent class mai virtual declare hai then sabhi child class mai rahega 



    return 0;
}
//without virtual the size is small  like v=8,b=12;  and within virtual size is 12  & 16;