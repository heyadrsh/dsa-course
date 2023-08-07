#include<iostream>
using namespace std;

int main(){
  int val;
  cout<<"enter number: ";
  cin>>val;

  switch (val)
  {
  case 1: cout<<"one";
    break;
  case 2: cout<<"two";
    break;
  case 3: cout<<"three";
    break;
  default: cout<<"Progress";
    break;
  }
}