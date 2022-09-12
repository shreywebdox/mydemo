#include<iostream>
using namespace std;
int main() {
    int i;
    int n;

    cout << "Entre how many values you want on an array";
    cin >> n;

    int marks[n];

    for (i=0; i<n; i++) {
        cout << "Entre value";
        cin >> marks[i];
    }

    for (i=0; i<n; i++) {
        cout << marks[i] << endl;
    }
    return 0;
}