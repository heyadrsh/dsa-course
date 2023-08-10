#include<iostream>
using namespace std;

int countingTillN(int n){
  for(int i=1; i<n; i++){
    cout<<i<<endl;
  }
}

int main(){
  int n;
  cout<<"Enter last number / n: ";
  cin>>n;

  cout<<countingTillN(n);
}