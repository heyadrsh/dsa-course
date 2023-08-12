#include<iostream>
using  namespace std;

int setKthBith(int n, int k){
  int mask=1<<k;
  int ans= n | mask;
  return ans;
}

int main(){
  int n;
  cin>>n;
  int k;
  cin>>k;
  cout<<setKthBith(n,k);
}