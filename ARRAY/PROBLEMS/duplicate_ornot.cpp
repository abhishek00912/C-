#include<iostream>
#include<climits>
using namespace std;

int main(){
int n=5;

int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}
int product=1;
for(int i=0;i<n;i++){

    for(int j=i+1;j<n;j++){

        if(arr[i]==arr[j]){

        cout<<"yes it contain  duplicate of "<< arr[i]<<endl;
        break;
    }


}

}

return 0;
}