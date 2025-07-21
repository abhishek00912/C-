#include<iostream>
#include<fstream>

using namespace std;

int main(){

// file ko open karna
   ofstream fout;   // fout object ka naam hai 

   fout.open("zoom.txt");  // if not available this file than it will automatically create the file 

// open ek member hai  fout ka 

   fout<<" hello india \n ";

   fout.close();

    return 0;
}