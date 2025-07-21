// #include<iostream>
// #include<vector>
// using namespace std;


// int main(){
// int n,x;

// cout<<"enter value of  x"<<endl;
// cin>>x;
// vector<int>v;
// cout<<"enter array size:";
// cin>>n;

// int arr[n];
// cout<<"enter array elements"<<endl;
// for(int i=0;i<n;i++){
         
//     int q;
//     cin>>q;
//     v.push_back(q);
// }
// for(int i=0;i<v.size()-1;i++){

//     for(int j=i+1;j<v.size()-1;j++){
//           if(v[i]+v[j]==x){
//             cout<<"("<<i<<" ,"<<j<<")"<<endl;
//           }
//     }


// }


//     return 0;
// }

// ROTATE THE ARRAY

#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&a){

    for(int i=0;i<a.size();i++){

        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){

vector<int>v1;

v1.push_back(2);
v1.push_back(3);
v1.push_back(4);
v1.push_back(5);
v1.push_back(6);

display(v1);

vector<int>v2(v1.size());

for(int i=0;i<v2.size();i++){

    v2[i]=v1[v1.size()-1-i];
}
display(v2);




    return 0;
}