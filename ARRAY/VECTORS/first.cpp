//VECTORS - it is a dynamic array it's solve the array limittions array has fixrd size wheras as vector has dynamic size  

#include<iostream>
#include<vector>

using namespace std;


int main(){

vector<int>v;

v.push_back(8);   //1 1
   
v.push_back(7);  // 2 2
v.push_back(7);  // 3 4

v.push_back(71); //4 4
v.push_back(17);  // 5 8
v.push_back(2);    // 6 8

v.push_back(2);  //7 8
v.push_back(2);  // 8 16
v.push_back(2);
v.push_back(2);

v.pop_back();


cout<<v.capacity()<<endl;
cout<<v.size()<<endl;

for(int i=0;i<v.size();i++){

    cout<<v[i]<<" ";
}

    return 0;
}