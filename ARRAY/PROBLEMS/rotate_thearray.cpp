#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


void display(vector<int>&a){
for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
}
cout<<endl;
}
void reversepart(int i,int j,vector<int>&v){
 while(i<=j){
    int temp=v[i];
    v[i]=v[j];
    v[j]=temp;
    i++;
    j--;
 }
}
int main(){

    vector<int>v;

    v.push_back(1);
    v.push_back(12);
    v.push_back(13);
    v.push_back(14);
    // v.push_back(15);
    // v.push_back(16);
    // v.push_back(17);

display(v);

cout<<endl;
reversepart(0,2,v);
display(v);

    return 0;
}