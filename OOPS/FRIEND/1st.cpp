#include <iostream> 
using namespace std; 
class A { 
private: 
int x = 5; 
friend class B; // Declare B as friend 
}; 
class B { 
public: 
void display(A obj) { 
cout << "Accessing private member x: " << obj.x << endl; 
} 
}; 
int main() { 
A a; 
B b; 
b.display(a); 
return 0; 
}