// PALLNDROME 

#include<iostream>
#include<cstring>
using namespace std;
int main() {

    char msg[10] = "madam";
    char msg1[10];

    strcpy (msg1, msg);
    strrev (msg);

     if (strcmp(msg, msg1)==0) {
        cout << "Pallndrome";
     }
     else {
        cout << "not pallndrome";
     }
     return 0;
}