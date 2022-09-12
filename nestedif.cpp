// Greater of 3 Number

#include<iostream>
using namespace std;
int main() {
    int a = 10;
    int b = 20;
    int c = 50;

    if ( a > b ) {
        if ( a > c) {
            cout << "a is greater";
        }
        else {cout << "c is greater";}
    }
    else {
        if ( b > c) {
            cout << "b is greater";
        }
        else {cout << "c is greater";}
    }
    return 0;
}