#include<iostream>
using namespace std;
class person{
private:

char health;
int age;

    public:
string name;
int hight;
void sethealth(char  h){

    health=h;
}
void setage(int a){
    age=a;
}
 char gethealth(){

    return health;
 }
int getage(){
    return age;
}
};
int main(){
person abhishek;
abhishek.name="abhisehk";
abhishek.hight=6;

    abhishek.sethealth('A');
    abhishek.setage(20);
cout<<abhishek.name<<endl;
    cout<<"health is:"<<abhishek.gethealth();
    cout<<endl;
    cout<<"Age is: "<<abhishek.getage();
    return 0;
    
}