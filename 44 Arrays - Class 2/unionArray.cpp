#include <iostream>
#include <vector>
using namespace std;

vector<int> unionArray(vector<int> arr1, vector<int> arr2) {
  vector<int> arr3(arr1.size() + arr2.size());

  for (int i = 0; i < arr1.size(); i++) {
    arr3[i] = arr1[i];
  }

  for (int i = 0; i < arr2.size(); i++) {
    arr3[arr1.size() + i] = arr2[i];
  }

  return arr3;
}

int main() {
  int x;
  cout << "Enter x_length: ";
  cin >> x;

  vector<int> arr1(x);
  cout << "Enter Elements: " << endl;
  for (int i = 0; i < arr1.size(); i++) {
    cout << i + 1 << ": ";
    cin >> arr1[i];
  }

  int y;
  cout << "Enter y_length: ";
  cin >> y;

  vector<int> arr2(y);
  cout << "Enter Elements: " << endl;
  for (int i = 0; i < arr2.size(); i++) {
    cout << i + 1 << ": ";
    cin >> arr2[i];
  }

  vector<int> arr3 = unionArray(arr1, arr2);
  cout << "Union: ";
  for (int i = 0; i < arr3.size(); i++) {
    cout << arr3[i] << " ";
  }
  cout << endl;
}
