#include<iostream>
using namespace std;

int main(){
// int n=5;
int arr[ ]={1,2,3,4,5,7,8,9,10,11,12,23,45,6};

cout<<sizeof(arr)/sizeof(arr[0]);

cout<<&arr[0]<<endl;
cout<<&arr[1]<<endl;
cout<<&arr[2]<<endl;
cout<<&arr[3]<<endl;
cout<<&arr[4]<<endl;


    return 0;
}