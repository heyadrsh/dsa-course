#include<iostream>
using namespace std;

int sumEvenN(int n){
  int sum=0;
  for(int i=2; i<=n; i+=2){
    sum+=i;
  }
  return sum;
}

int main(){
  int n;
  cout<<"Enter N: ";
  cin>>n;
  cout<<"Sum of Even numbers till N is "<<sumEvenN(n)<<endl;
}