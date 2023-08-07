#include<iostream>
using namespace std;

int main(){
  bool a=true;
  bool b=false;
  bool c=true;
  bool d=true;

  cout<<(a^b)<<" <----- for different"<<endl;
  cout<<(c^d)<<" <----- for same"<<endl;
}