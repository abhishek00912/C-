#include<iostream>
using namespace std;
class over{
    public:
void add(int a ,int b){

    cout<<a+b<<endl;
}
void add(double a,double b){

    cout<<a+b;
}




};
int main(){

 over  obj;

//  obj.add(12,10);
 obj.add(2.9,9.8);


    return 0;
}
