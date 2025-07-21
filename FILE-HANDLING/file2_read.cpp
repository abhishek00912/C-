#include<iostream>
#include<fstream>
using namespace std;

int main(){


    ifstream fin;

    //file ko open karo
    // than read  karo

    fin.open("zoom.txt");

    // fr read karo 

    char c;
    c = fin.get();

    while(!fin.eof())
    {
     cout << c;
    c =  fin.get(); 
    }

int n =223;
fin.close();

    return 0;
}