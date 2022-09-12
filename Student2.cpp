#include<iostream> 
using namespace std;

class student {
    public:
    string name;
    int age;

    void display() {
        cout << "Name is" <<name<< "and age is" <<age<< endl;
    }
    void checkAge() {
        if (age > 20) {
            cout << "You are eligible" << endl;
        }
        else {
            cout << "You are not eligible" << endl;
        }
    }
};

int main() {
    student s1;  // where s1 is object 
    s1.name = "Akash";
    s1.age = 20;
    s1.display();
    s1.checkAge();

    student s2;   // where s2 is object
    s2.name = "Neha";
    s2.age = 21;
    s2.display();
    s2.checkAge();

    return 0;   
}