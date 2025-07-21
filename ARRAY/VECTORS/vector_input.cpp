#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

vector<int>v;
int x;
for(int i=0;i<5;i++){
 cin>>x;
 v.push_back(x);
  
}
// v.at(3)=56;  // it uupdate the value of v at 3
// cout<<v.at(3);


for(int i=0;i<v.size();i++){

    cout<<v.at(i)<<" ";
}
cout<<endl;
sort(v.begin(),v.end());


for(int i=0;i<v.size();i++){

    cout<<v.at(i)<<" ";
}
    return 0;
}

