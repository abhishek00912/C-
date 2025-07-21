#include<iostream>
#include<vector>
using namespace std;


class Animal{

    public:
   virtual  void speak(){
        cout<<" hu hu"<<endl;

    }
};
class dog:public Animal{
public:
void speak(){
    cout<<" bark"<<endl;
}

};
class cat:public Animal{
public:
void speak(){
    cout<<" meow"<<endl;
}

};

int main(){

Animal *p;
// p= new dog;

// p->speak();

vector<Animal*>animals;

animals.push_back(new dog());
animals.push_back(new cat());
animals.push_back(new Animal());
animals.push_back(new dog());
animals.push_back(new cat());


for(int i=0;i<animals.size();i++){

    p=animals[i];
    p->speak();
}







    return 0;
}