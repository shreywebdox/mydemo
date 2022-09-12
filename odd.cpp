#include<iostream>
using namespace std;
int main() {
    int n;

    cout << "Entre a number";
    cin >> n;

    if (n % 2==1) {
        cout << "Odd";
    }
    else {
        cout << "Not odd";
    }
    return 0; 

}