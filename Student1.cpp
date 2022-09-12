#include<iostream>
using namespace std;

class student  {
    public:
    string name;
    int age;
};

int main() {
    student s1;  // where s1 is object
    s1.name = "Akash";
    s1.age = 20;
    cout << "Name is" << s1.name << "and age is" << s1.age << endl;

    student s2;  // where s2 is object
    s2.name = "Neha";
    s2.age = 21;
    cout << "Name is" << s2.name << "and age is" << s2.age << endl;

    return 0;
}