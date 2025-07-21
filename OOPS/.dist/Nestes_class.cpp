#include<iostream>
using namespace std;
// nested  classs 
class Gun{
    public:
int amo;
int damage;
int scope;

};
class player{
    private:
int health;
int age;
int score;
bool alive;
Gun  gun;

class Helmet{
    private:
 int hp;
 int level;
int health;
 public:

 void sethealth(int health){
    this->health=health;
 }
 void sethp(int hp){
    this->hp=hp;
 }
 void setlevel(int level){
    this->level=level;
 }
 int gethp(){

    return hp;
 }
 int gethealth(){
    return health;
 }
int getlevel(){
    return level;
}



};
void sethealth(char  h){

    health=h;
}
void setage(int a){
    age=a;
}
 int gethealth(){

    return health;
 }
int getage(){
    return age;
}

 Gun getGun(){
return gun;

}

int getscore(){
    return score;
}
int isalive(){
    return alive;
}
void getscore(int score){
    this->score=score;
}
void setalive(bool alive){

    this->alive=alive;
}
void setgun(Gun gun){

  this->gun=gun;
}
void sethelmet(int level){
Helmet* helmet= new Helmet;
int health;
if(level==1)
health=25;
else if(level==2)
health=50;

else if (level ==3){

    health=100;
}
else
cout<<"error , invalid error!";
helmet->sethp(health);
}
};


int main(){
player abhishek;  // object creation statically
player amit; // compile time static allocation 

player *abhi=new player; // run time , dunamic allocation

Gun akm;

akm.amo=15;
akm.damage=90;
akm.scope=4;



  

    return 0;
}