#include<iostream>
using namespace std;

int factorial(int n){
  int fact=1;
  if(n==0){
    return 1;
  }
  else{
    for(int i=1; i<n; i++){
      fact+=fact*i;
    }
  }
  return fact;
}

int main(){
  int f;
  cout<<"Enter number: ";
  cin>>f;

  cout<<"Factorial of "<<f<<" is "<<factorial(f)<<"."<<endl;
}