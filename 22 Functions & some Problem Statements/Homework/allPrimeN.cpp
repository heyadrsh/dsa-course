#include <iostream>

using namespace std;

bool isPrime(int n) {
  // Corner cases
  if (n <= 1) {
    return false;
  }

  // Check if n is divisible by any number from 2 to n-1
  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}

void printPrimes(int n) {
  for (int i = 2; i <= n; i++) {
    if (isPrime(i)) {
      cout << i << " ";
    }
  }
}

int main() {
  int n;
  cin >> n;

  printPrimes(n);

  return 0;
}
