#include<iostream>
using namespace std;

int main(){
  int x;
  cout<<"x: ";
  cin>>x;

  int y;
  cout<<"y: ";
  cin>>y;

  int res=(x>y) ? x:y;
  cout<<res;
}