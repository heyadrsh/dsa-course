#include<iostream>
using namespace std;


int addTwoNumbers(int a,int b);

int main(){
  int a;
  cout<<"Enter first number: ";
  cin>>a;

  int b;
  cout<<"Enter Second Number: ";
  cin>>b;
  
  cout<<"Addition is: "<<addTwoNumbers(a,b)<<endl;
  cout<<"Address of A: "<<&a<<endl;
  cout<<"Address of B: "<<&b<<endl;

}

int addTwoNumbers(int a,int b){
  cout<<"Address of A: "<<&a<<endl;
  cout<<"Address of B: "<<&b<<endl;
  int c;
  c=a+b;
  return c;
}