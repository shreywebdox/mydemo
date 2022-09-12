#include<iostream>
using namespace std;
int main() {
    int n;

    cout << "Entre a number";
    cin >> n;

    if (n % 2==0) {
        cout << "Even";
    }
    else {
        cout << "Not even";
    }
    return 0;
}