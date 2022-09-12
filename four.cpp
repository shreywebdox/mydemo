#include<iostream>
using namespace std;
int main() {

int hindi;
int eng;
int math;
int marks;
char grade;

cout<<"Enter marks in hindi, eng, math";
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
 
 return 0;

}