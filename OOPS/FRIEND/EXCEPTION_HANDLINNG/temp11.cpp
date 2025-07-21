#include<iostream>
using namespace std;


int main(){

    int a ,b;
    cin>>a;

    cin>>b;
   try{
     if(b==0)
     throw "divided   by 0 is not possible ";
    int c =a/b;
    cout<<c<<endl;

   }
   catch(const char *e)
   {
cout<<"Exception Occured :"<<e<<endl;
   }



    return 0;;
}