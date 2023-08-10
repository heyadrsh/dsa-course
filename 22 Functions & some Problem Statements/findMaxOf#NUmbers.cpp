#include<iostream>
using namespace std;

int maxAmong3Numbers(int x, int y, int z);

int main(){
  int a;
  cout<<"Enter first number: ";
  cin>>a;

  int b;
  cout<<"Enter Second Number: ";
  cin>>b;

  int c;
  cout<<"Enter first number: ";
  cin>>c;

  cout<<"The Maximum number among three is: "<<maxAmong3Numbers(a,b,c)<<endl;
}

int maxAmong3Numbers(int x, int y, int z){
  if(x>y && x>z){
    return x;
  }
  else if(y>x && y>z){
    return y;
  }
  else{
    return z;
  }
}