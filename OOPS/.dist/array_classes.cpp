#include<iostream>
#include<string>
using namespace std;

class cricketer{
public:
    string   name;
    int age;
    int noOf_testmatches;
    long int average_testrun;


};
int main(){

    cricketer virat,rohit;
    virat.name="virat kohli";
    virat.age=30;
    virat.noOf_testmatches=100;
    virat.average_testrun=80;


    // cricketer rohit;
    rohit.name="Rohit sharma ";
    rohit.age=32;
    rohit.noOf_testmatches=101;
    rohit.average_testrun=90;


for(int i=0;i<2;i++){

cricketer *cricketers =new  cricketer;// here wew dynamically allocating the object in memory

cricketer->nme=;


}



    cricketer cricketers[2]={virat ,rohit};

for(int i=0;i<2;i++){
    cout<<cricketers[i].name<<endl;
    cout<<cricketers[i].age<<endl;
    cout<<cricketers[i].noOf_testmatches<<endl;
   cout<<cricketers[i].average_testrun<<endl;
}
    return  0;
}