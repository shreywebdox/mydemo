#include<iostream>
using namespace std;
int main() {
    int i, j;
    int r, c;

    cout << "Enter rows and colums";
    cin >> r >> c;

    int arr[r][c];
    int counter = 0;

    for (i=0; i<r; i++) {
        for (j=0; j<c; j++){
            cout << "Enter value " << ++counter;
            cin >> arr[i][j];
        }
    }

    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}