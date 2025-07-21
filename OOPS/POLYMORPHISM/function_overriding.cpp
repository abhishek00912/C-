#include<iostream>
using namespace std;

class vehicle{
public:
int a_ka_public;
 virtual void show(){

    // cout<<"mai a ka show hu:";
    cout<<"vehicle ka show:";
}
};
class Bike: public vehicle{
    public:
    int b_ka_public;
     void show(){
        // cout<<"aham B show asmi";
        cout<<"bike ka show";
    }

};


int main(){

    // compiler point of view -> vehicle type ka hai 
    // runtime point of view -> bike ka address hai 

    Bike b;
    vehicle *a;
    // b.show();
    cout<<endl;
    a=&b;          // here a mai bike ka address hai 
    // b.A::show();
a->a_ka_public=10;
a->show();


    return 0;
}