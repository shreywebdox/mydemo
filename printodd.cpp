//  PRINT ODD NUMBER FROM 0 TO 20

#include<iostream> 
using namespace std;
int main() {
    int i;

    for( i=0; i<=20; i++) {
        if ( i % 2==1 ) {
            cout << i << endl;
        }
    }
    return 0;
}