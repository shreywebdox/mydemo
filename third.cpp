#include <iostream>
using namespace std;
int main() {

string name;
int hindi, english, math, marks;
float per;
string result;

cout << "Entre your name";
cin >> name;

cout << "Entre marks in hindi";
cin >> hindi;
 
cout << "Entre marks in english";
cin >> english;

cout << "Entre marks in math";
cin >> math;

marks = hindi + english + math;
 
 per = marks/3;
 
 // result = marks > 200 ? "PASS" : "FAIL";

 result = (hindi > 40) && (english > 40) && (math > 40) ? "PASS" : "FAIL";

  cout<<name<<endl;
  cout<<marks<<endl;
  cout<<per<<endl;
  cout<<result<<endl; 

 return 0;
}