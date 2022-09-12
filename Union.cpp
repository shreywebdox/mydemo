// UNION

#include<iostream>
#include<cstring>
using namespace std;

union student {
    char name[10];
    int age;
    int marks;
};

int main() {
    student s1;
    
    strcpy(s1.name,"Akash");
        cout << s1.name << endl;
    s1.age=20;
         cout << s1.age << endl;
    s1.marks=90;
        cout << s1.marks << endl;

    student s2;

    strcpy(s2.name,"Neha");
        cout << s2.name <<endl;
    s2.age=21;
         cout << s2.age << endl;
    s2.marks=91;
         cout<< s2.marks << endl;
    
    return 0;
}