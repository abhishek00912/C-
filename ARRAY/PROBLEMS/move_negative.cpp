#include<iostream>
using namespace std;

void display( int arr[],int n){

    for(int i=0;i<n;i++){

        cout<<arr[i]<<" ";
    }
}
void negative(int arr[], int  n){
 int temp[n];
 int idx=0;
    for(int i=0;i<n;i++){   // first we store the negative number 
       if(arr[i]<0){
          temp[idx++]=arr[i];

       }
    }
    for(int i=0;i<n;i++){
       if(arr[i]>0){                 // than we store the positive no
          temp[idx++]=arr[i];

       }
    }
    for(int i=0;i<n;i++){
          arr[i]=temp[i];

    }

}
int main(){


    int n;
    cin>>n;

    int arr[n];

for(int i=0;i<n;i++){
  cout<<"enter the array elements :"<<i<<" ";
   cin>>arr[i];
   }

display(arr, n);

cout<<endl;

negative(arr, n);

display(arr,n);








    return 0;
}