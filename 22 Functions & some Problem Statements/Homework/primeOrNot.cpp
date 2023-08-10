#include<iostream>
using namespace std;

string primeOrNot(int n){
  int cond=0;
  for(int i=2; i<n; i++){
    if(n%i==0){
      cond+=1;
    }
    else{
      continue;
    }
  }
  if(cond>=1){
    return "Not Prime.";
  }
  else{
    return "Prime.";
  }
}

int main(){
  int n;
  cout<<"Enter Number: ";
  cin>>n;

  cout<<"Given Number is "<<primeOrNot(n)<<endl;
}