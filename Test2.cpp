// GREATER OF 3 NUMBERS 

#include<iostream>
using namespace std;
int main() {
    int a=10;
    int b=20;
    int c=30;

    if (a>b) {
        if (a>c){
            cout << "a is greater";
        }
        else {
            cout << "c is greater";
        }
    }
    else { 
        if (b>c) {
        cout << "b is greater";
        }
    else { cout << "c is greater"; }
    }

    return 0;
}