#include <iostream>
using namespace std;

int main() {
  int i = 0;
  
  for(i=0; i<5; i+=1) {
    // loop body
  }

  cout << "Value of i after loop is: " << i << endl;

  if(i == 5) {
    cout << "Loop counter i reached 5 before loop termination" << endl;
  } else {
    cout << "Loop counter did not reach 5" << endl; 
  }

  return 0;
}