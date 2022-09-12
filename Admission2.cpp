#include<iostream>
using namespace std;

string admission(int age) {
   if (age < 16) {
    return "You are noy eligible\n";
   }
   return "Congrats you have been enrolled in our course\n";

}


int main() {
    cout << admission(20) << endl;
    cout << admission(21) << endl;

    return 0;
}