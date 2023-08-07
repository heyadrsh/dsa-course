#include<iostream>
using namespace std;

int main(){
  bool a=true;
  bool b=false;
  bool c=true;
  bool d=true;
  bool e=false;
  bool f=false;
  cout<<endl;

  cout<<(a&b)<<" <----- for different"<<endl;
  cout<<(c&d)<<" <----- for same"<<endl;
  cout<<(e&f)<<" <----- for same but revert"<<endl;
  cout<<(2 & 3)<<endl;
  cout<<(10 & 5)<<endl;
}