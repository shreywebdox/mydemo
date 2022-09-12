#include<iostream>
using namespace std;
int main() {
    int i, j;
    int r, c;
     
     cout << "Entre rows and colums";
     cin >> r >> c;

     int arr[r][c];

     // INPUT 
     for (i=0; i<r; i++){
        for (j=0; j<c; j++){
             
            cout << "Entre Value";
            cin >> arr[i][j];
        }
     }

     // OUPUT
     for(i=0; i<r; i++) {
        for(j=0; j<c; j++){
            cout<< arr[i][j]; }
            cout << endl;
     }
 
     return 0;
}