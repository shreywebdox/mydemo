#include<iostream>
using namespace std;

void admission(int age) {
    if (age < 16) {
       throw "you are not eligible";
    }
    cout << "Congrats you have been enrolled in our course";
}

int main() {
    try {
        admission(20);
        admission(12);
    }
    catch (char const* msg) {
        cout << msg << endl;
    }
   return 0;
}