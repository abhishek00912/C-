#include<iostream>
using namespace std;


class complex{
int real;
int img;
public:
complex(){  // constructor 


};

complex(int real,int img){

    this->real=real;
    this->img=img;

}
void display(){
    cout<<real<<" +i"<<img<<endl;

}
complex operator+(complex &c){

    complex ans;
    ans.real=real+c.real;
    ans.img=img+c.img;
    return ans;

}
};
int main(){


    complex c1(2,4);
    complex c2(3,5);

    complex c3=c1+c2;

c3.display();

    return 0;
}
