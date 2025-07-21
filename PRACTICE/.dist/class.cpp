#include<iostream>
using namespace std;


class player{
private:
int health;
int age;
int score;
bool alive;
public:

int gethealth(){
    return health;
}
int getscore(){

    return score;
}
int getage(){
    return age;
}
int isalive(){
    return alive;
}

void sethealth(int health){
    this->health=health;
}
void setscore(int score){

   this->score=score;
}
//:: scope resolution operator

void setage(int age){
   this->age=age;
}
void setisalive(bool alive){

    this->alive=alive;
}


};
int  addscore(player  a ,player  b){

   
    return  a.getscore()+b.getscore();
}

player getmaxScorePlayer(player a ,player b){

    if(a.getscore()>b.getscore())
    return a;
    else 
    return b;
}
int main(){

player abhishek;
player amit;


abhishek.sethealth(10);
// abhishek.sethealth(12);
abhishek.setisalive(true);
abhishek.setscore(200);
abhishek.setage(21);

amit.sethealth(11);
amit.setscore(201);
amit.setisalive(false);
amit.setage(22);

cout<<addscore(abhishek,amit)<<endl;

player sanket=getmaxScorePlayer(abhishek,amit);
cout<<sanket.getscore();



    return 0;
}