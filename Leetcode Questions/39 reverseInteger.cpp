#include<iostream>
using namespace std;

int reverseInteger(int n) {
    int ans = 0;
    bool isNeg = false;

    if (n < INT_MIN || n > INT_MAX) {
        return 0;
    }

    if (n < 0) {
        isNeg = true;
        n = -n;
    }

    while (n > 0) {
        int digit = n % 10;
        if (ans > (INT_MAX - digit) / 10) {
            return 0;
        }
        ans = ans * 10 + digit;
        n = n / 10;
    }

    return isNeg ? -ans : ans;
}

int main(){
  int n;
  cout<<"Enter Number: ";
  cin>>n;
  cout<<"Reverse integer would be "<<reverseInteger(n)<<endl;
}