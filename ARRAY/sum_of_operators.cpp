// #include<iostream>
// using namespace std;

// int main(){
// int n=5;
// int arr[n];
// int sum=0;
// for(int i=0;i<n;i++){

//     cout<<"enter the marks of students "<<i+1<<" :";
//     cin>>arr[i];
// sum=sum+arr[i];
//     // cout<<sizeof(arr)/sizeof(arr[0];
// }
// cout<<sum;



//     return 0;
// }


//FIND  ELEMENT X IN THE ARRAY 

#include<iostream>
using namespace std;

int main(){
int n=5;
int arr[n];
// int sum=0;
int x;
cout<<"enter the value of x:";
cin>>x;

bool flag = false;
for(int i=0;i<n;i++){
    
    cout<<"enter array values  "<<i+1<<" :";
    cin>>arr[i];
};
for(int i=0;i<n-1;i++){

    if(arr[i]==x)
    
    flag=true;

    
}
if(flag== true) cout<<"element  is found ";
else cout<<" 404 element is not found";





    return 0;
}
