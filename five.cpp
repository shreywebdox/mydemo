#include<iostream>
using namespace std;
int main() {

int hindi;
int eng;
int math;
int marks;
char grade;

cout<<"Entre marks in hindi, eng, math";
cin>>hindi>>eng>>math;
marks = hindi + eng + math;

if (marks <= 150) {
    grade = 'D';
}
if (marks > 150) {
    grade = 'C';
}
if (marks > 200) {
    grade = 'B';
}
if (marks > 250) {
    grade = 'A';
}
cout<<"Grade is "<<grade<<" because marks is "<<marks;

// REMARKS

switch(grade) {
    case 'A':
    cout<<"Excellent"<<endl;
    break;

    case 'B':
    cout<<"Good"<<endl;
    break;

    case 'C':
    cout<<"Average"<<endl;
    break;

    default:
    cout<<"Poor";
}

return 0;
}