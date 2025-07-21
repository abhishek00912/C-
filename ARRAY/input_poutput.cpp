#include<iostream>
using namespace std;

int main(){
int n=9;
int arr[n];

for(int i=0;i<n;i++){

    cout<<"enter the  "<<i<<" :";
    cin>>arr[i];

}
cout<<arr[0];
cout<<"the output array is :/n";
for(int i=0;i<n;i++){

    cout<<arr[i]<<" ";

}

    return 0;
}