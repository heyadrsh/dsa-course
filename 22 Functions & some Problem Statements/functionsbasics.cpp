#include<iostream>
using namespace std;

void printname(){
  string name;
  cout<<"Enter name: ";
  cin>>name;
  int n;
  cout<<"Enter counts: ";
  cin>>n;

  for(int i=0; i<n; i++){
    cout<<name<<endl;
  }
}

int main1(){
  printname();
  return -1;
}

int main(){
  int a;
  a=main1();
  cout<<a;
}