#include<iostream>
using namespace std;

int main() {
    int x=10;
    int *ptr = &x;

    cout<<ptr<<endl;        //ADDRESS
    cout<<*ptr<<endl;       //VALUE OF X
    cout<<&x<<endl;         //ADDRESS
    cout<<&ptr<<endl;       //ADDRESS OF PTR
    
    return 0;

}