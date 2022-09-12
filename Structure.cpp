// STRUCTURES

#include<iostream>
#include<cstring>
using namespace std;

struct student {
    char name[10];
    int age;
    int marks;
};

int main() { 
    struct student s1;

    strcpy(s1.name,"Akash");
    s1.age=20;
    s1.marks=90;

    struct student s2;

    strcpy(s2.name,"Neha");
    s2.age=21;
    s2.marks=91;

    cout << "Name is" << s1.name << "and age is" << s1.age << "and marks is" << s1.marks << endl;

    cout << "Name is" << s2.name << "and age is" << s2.age << "and marks is" << s2.marks << endl;
    
    return 0;
}