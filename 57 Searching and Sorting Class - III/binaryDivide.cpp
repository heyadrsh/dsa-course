#include<iostream>
using namespace std;


int binaryDivide(int dividend, int divisor){
  int s=0;
  int e= abs(dividend);
  int ans=0;
  int mid=s+(e-s)/2;

  while(s<=e){
    if(abs(mid * divisor) == abs(dividend)){
      ans=mid;
      break;
    }
    if(abs(mid * divisor) > abs(dividend))
    {
      e=mid-1;
  }
  else{
    ans=mid;
    s=mid+1;
    }
    mid=s+(e-s)/2;
  }

  if((divisor<0 && dividend<0) || (divisor>0 && dividend>0)){
    return ans;
  }
  else{
    return -ans;
  }
}

int main(){
  int dividend;
  cout<<"Enter dividend: ";
  cin>>dividend;
  int precision =0;
  double finalAns=0;
  double step=0.1;

  int divisor;
  cout<<"Enter divisor: ";
  cin>>divisor;

  int ans=binaryDivide(dividend,divisor);

  cout<<"quotient is: "<<ans<<".";

  for(int i=0;i<precision; i++){
    for(double j=finalAns; j*j<=dividend; j=j+step){
      finalAns=j;
    }
    step=step/10;
  }
  cout<<"Final Answer is: "<<finalAns<<endl;
  return 0;
} 