#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main(){
map<string,int>m;

m["tv"]=45;
m["laptoop"]=23;
m["headphone"]=34;

for(auto p: m){

    cout<< p.first
}



    return 0;;
}