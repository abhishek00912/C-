#include<iostream>

#include<vector>
using namespace std;

class Animal{

    public:

    virtual  void  speak(){      // here we use virtual function  before  speak function  to eable the run time polymorphism 
        cout<< "sound "<< endl;
     }
 
    
};

class dog :  public Animal{

    public:

     void speak(){

        cout<<" bark"<<endl;
     }
};

class cat : public Animal{

    public:

    void speak(){
cout <<" meaw" <<endl;

    }
};
int main(){

    Animal *p;
    vector<Animal*>animals;
    // p= new dog();
    // p->speak();

    animals.push_back(new dog());\
    animals.push_back(new cat());
    animals.push_back(new Animal());
    animals.push_back(new dog());
    animals.push_back(new cat());
    // animals.push_back(new dog());

    for(int i=0;i<animals.size();i++){

        p= animals[i];
        p->speak();
    }





    return 0;
}


// real life scenario if we have 100 classes