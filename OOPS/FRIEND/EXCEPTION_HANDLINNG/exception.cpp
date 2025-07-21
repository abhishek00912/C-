#include<iostream>
using namespace std;


int main(){

    try{
int *p= new int[1000000987];

cout<<"Mmeory allocation  is succesfully\n";
delete[]p;
    }
    catch(const exception &e)
    {
        cout<<"Exception is occured  due to line 9:"<<e.what()<<endl;
    }



    return 0;
}