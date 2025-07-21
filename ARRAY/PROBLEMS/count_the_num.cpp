#include<iostream>
#include<climits>
using namespace std;

int main(){
int n=5,x;
cout<<"enter the valur of x:"<<endl;
cin>>x;
int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}
int count =0;
for(int i=0;i<n;i++){

   if(arr[i]>x){
    count++;
   }
}
  if(count==0) cout<<"no number is greater than x"<<endl;
cout<<count<<endl;
    return 0;
}