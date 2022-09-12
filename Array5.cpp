// MINIMUM of n Array Values

#include<iostream>
using namespace std;
int main() {
    int i;
    int n = 4;
    int marks[] = {44, 77, 99, 22};

    int min = marks[0];

    for (i=0; i<n; i++) {
        if(min > marks[i]){
            min = marks[i];
        }
    }
    cout <<"min marks is" << min;

    return 0;
}