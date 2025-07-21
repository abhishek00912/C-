#include<iostream>
#include<vector>
using namespace std;
int main(){


    vector<int>v{1,2,3,4,5};

    // for(int val : v){
    //     cout<< val<<" "<<endl;
    // }


    // cout<<" vector begin :"<<*v.begin()<<endl;
    // cout<<" vector begin :"<<*v.end()<<endl;

    vector<int>::iterator it;
    for(it=v.begin(); it!=v.end();it++){

        cout<< *(it)<<" ";
    }
// ector<int>::reverse_iterator it;
//        for(it=v.rbegin(); it!=v.rend();it++){

//         cout<< *(it)<<" ";
//     }
cout<<endl;

for(auto it=v.rbegin();it!=v.rend();it++){

     cout<<*(it)<<" ";
}

    



    return 0;
}