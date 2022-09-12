// bitwise operators

#include<iostream>
using namespace std;
int main() {

    int a = 10;
    int b = 2;

    int z = a & b;
    cout << "And Operation:" << z << endl;
   
    z = a | b;
    cout << "Or Operation:" << z << endl;
  
    z = a ^ b;
    cout << "XOR Operation:" << z << endl;
   
    z = a << 2;
    cout << "Left Operation:" << z << endl;
   
    z = a >> 1;
    cout << "Right Operation:" << z << endl;

    return 0;
}