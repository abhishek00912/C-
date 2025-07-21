#include<iostream>
using  namespace std;
class area{
public:
int calculateArea(int r){
    return 3.14*r*r;
}
int calculateArea(int l,int b){
    return l*b;
}
};
int main(){
area a1;
// cout<<a1.calculateArea(5);
cout<<a1.calculateArea(23,3);
    return 0;
}