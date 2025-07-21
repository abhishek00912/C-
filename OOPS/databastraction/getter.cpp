#include<iostream>
using namespace std;
class player{
private:
int score;
int health;
public:

 void setscore(int s){
    score=s;

 }
 void sethealth(int h){
    health=h;
 }
 int getsscore(){
    return score;
 }
 int gethealth(){
    return health;
 }


};
int main(){

    player harsh;
    harsh.sethealth(222);
    harsh.setscore(10);// here basically we just set the value from outside the class in  a private data member

    cout<<harsh.getsscore()<<endl;
    cout<<harsh.gethealth();

    return  0;
}