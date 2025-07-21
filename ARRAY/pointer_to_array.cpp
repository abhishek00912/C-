#include<iostream>
using namespace std;

int main(){

    int arr[]={4,2,5,1,7};

    int * ptr=arr;   // giving address
*ptr=8;
ptr++;
    ptr[0]=8;
    cout<<&arr[0]<<endl;

    for(int i=0;i<=4;i++){

        cout<<i[ptr]<<" ";
    }
    cout<<endl;
//    *ptr=10;
//    ptr++;
//    *ptr=9;
//    ptr--;
    for(int i=0;i<=4;i++){

        cout<<*ptr<<" ";
        ptr++;
    }
}