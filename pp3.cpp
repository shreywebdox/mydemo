// PASSING ARRAY TP FUNCTION 

#include<iostream> 
using namespace std;

    void sum(int *arr) {
      for (int i=0; i<3; i++){
      cout << arr[i] << endl;
    }
    }
    int main() {
        int marks[10] = {90, 60, 30};

  sum(marks);
  return 0;
    }
    
