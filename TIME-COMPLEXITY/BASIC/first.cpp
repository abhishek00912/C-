#include<iostream>
using namespace std;

int main(){
int sum=0;
int n=7
;
int arr[n]={6,3,2,4,1,7,1,5};

for(int i=0;i<=n;i++){
sum+=arr[i];
// cout<<sum<<endl;

}
cout<<sum<<endl;
int s=n*(n+1)/2;
cout<<(sum-s);




    return 0;
}

