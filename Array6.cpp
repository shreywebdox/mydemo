#include<iostream>
using namespace std;
int main() {
    int i, j;
    int arr[2][3] = { {10, 20, 30},
                       {40, 50, 60},};
    

    for (i=0; i<2; i++){
        for (j=0; j<3; j++){
            cout << arr[i][j] <<"\t";
        }
        cout << endl;
    }
    return 0;
}