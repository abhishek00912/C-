#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


void display(vector<int>&a,int n){

for(int i=0;i<a.size();i++){

    cout<<a[i]<<" ";

}
cout<<endl;

}
int main(){
int n;
cin>>n;
vector<int>v1(n);



for(int i=0;i<n;i++){
   
    cin>>v1[i];
    
}

display(v1,n);

// int i=0;
// int j=v1.size()-1;


// while(i<=j){

//     int temp=v1[i];
//     v1[i]=v1[j];
//     v1[j]=temp;
//     i++;
//     j--;

// }
// n=v1.size();
// int temp;
// for(int i=0,j=n-1;i<=j;i++,j--){

//  temp=v1[i];
//     v1[i]=v1[j];
//     v1[j]=temp;
  


// }
reverse(v1.begin(),v1.end());


display(v1,n);

    return 0;
}