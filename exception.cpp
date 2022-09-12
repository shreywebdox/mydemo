// EXCEPTION HANDLING: are errors that occur at runtime 

#include<iostream>
using namespace std;

void divide(int x, int y){
    float z;

    if (y == 0) {
        throw "Dvision by zero condition!";
    }
    z = (float)x/y;
    cout << "Result =" << z << endl;
}
int main() {
  
  try {
    divide(10,2);
    divide(8,2);
    divide(100,0);
  }
  catch (char const* msg) {
    cout << msg;
  }
  return 0;
}