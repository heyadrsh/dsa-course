#include <iostream>
#include <cstring>

using namespace std;

int main() {
  // Declare an array of integers
  int arr[10];

  // Initialize the array to all zeros using memset
  memset(arr, 0, sizeof(arr));

  // Print the array to see that it is initialized to all zeros
  for (int i = 0; i < 10; i++) {
    cout << arr[i] << endl;
  }

  // Fill the array with all 'A' characters using memset
  memset(arr, 1, sizeof(arr));

  // Print the array to see that it is filled with all 'A' characters
  for (int i = 0; i < 10; i++) {
    cout << arr[i] << endl;
  }

  return 0;
}
