#include <iostream>
#include <string>
using namespace std;

class employees {
private:
    int imp_id;
    string name;
    int age;
    long long int phone_no;

public:
    void setimp_id(int imp_id) {
        this->imp_id = imp_id;
    }
    void setname(string name) {
        this->name = name;
    }
    void setage(int age) {
        this->age = age;
    }
    void setphone_no(long long int phone_no) {
        this->phone_no = phone_no;
    }

    int getimp_id()const {
        return imp_id;
    }
    int getage() const{
        return age;
    }
    string getname()const {
        return name;
    }

    long long int getphone_no() const{
        return phone_no;
    }
};

void display(const employees& emp) {  // displaying outside the class
    cout << "Employee ID: " << emp.getimp_id() << endl;
    cout << "Name: " << emp.getname() << endl;
    cout << "Age: " << emp.getage() << endl;
    cout << "Phone No: " << emp.getphone_no() << endl;
}

int main() {
    employees abhishek;
    abhishek.setage(20);
    abhishek.setname("Abhishek");
    abhishek.setimp_id(3223);
    abhishek.setphone_no(9330422912);

    display(abhishek);

    return 0;
}