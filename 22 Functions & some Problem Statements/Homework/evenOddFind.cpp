#include<iostream>
using namespace std;

string findEvenOdd(int n){
  if(n%2==0){
    return "Even";
  }
  else{
    return "Odd";
  }
}

int main(){
  int n;
  cout<<"Enter No. : ";
  cin>>n;

  cout<<"Input Number is "<<findEvenOdd(n)<<"."<<endl;
}