#include<iostream>
#include<vector>
#include<fstream>

using namespace std;

int main(){

vector<int>arr(5);

int n=arr.size();
cout<<"enter the input: ";
for(int i=0;i<5;i++){
    cin>>arr[i];

// file ko open karo pehle

ofstream fout;

fout.open("zero.txt");

fout<<"original data\n";

for(int i=0;i<n;i++)
{
  fout<<arr[i]<<" ";

}
fout.close();

}
    return 0;
}
