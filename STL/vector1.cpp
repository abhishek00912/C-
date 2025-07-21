#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v={1,2,3,4,5};

// vector<int>v1(3,10);// here the size is first and then the  value  means the size is 3 and in that size only 10 will store 3 times.
// // at is used to access the element at any given index value.

// vector<int>v2(v1);
// // v.push_back(12);
// // v.push_back(12);
// // v.push_back(27);
// // v.emplace_back(34);
// // v.pop_back();


// for(int val : v2){
//     cout<<val<<" ";
// }

// cout<<" val at idx: "<<v2[2]<< " or "<< v2.at(2) <<endl;
// cout<<endl;
// cout<<"size :"<<v2.size()<<endl;
// cout<<"capacity :"<<v2.capacity()<<endl;

// cout<<" front :"<<v2.front()<<endl;
// cout<<"back :"<<v2.back()<<endl;
// front  & backv

// erase and insert 

v.erase(v.begin()+2);
v.insert(v.begin()+2,56);

// v.clear();  // it remove all the  value


cout<<" is empty :" << v.empty() <<endl;


for(int val : v){

    cout<< val<< " ";
}


    return 0;
}