#include <iostream>

using namespace std;

int main() {
  int rows, cols;

  cout << "Enter number of rows: "; 
  cin >> rows;

  cout << "Enter number of columns: ";
  cin >> cols;

  for(int i=rows; i>=1; --i) {
    for(int j=1; j<=cols; ++j) {
      cout << "*"; 
    }
    cout << "\n";
  }

  return 0;
}