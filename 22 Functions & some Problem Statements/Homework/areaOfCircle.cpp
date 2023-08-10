#include<iostream>
using namespace std;

float areaCircle(float r){
  return 2*(3.14)*r;
}

int main(){
  float r;
  cout<<"Enter radius: ";
  cin>>r;

  cout<<"Area of Circle for radius "<<r<<" is "<<areaCircle(r)<<" units."<<endl;
}