#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

int findsqurt(int num){
  int start=0;
  int end=num;
  int mid = start + (end - start) / 2;
  int ans=-1;

  while(start<=end){
    if(num==mid*mid){
      return mid;
    }
    if(num<mid*mid){
      end=mid-1;
    }
    else{
      ans=mid;
      start=mid+1;
    }
    mid = start + (end - start) / 2;
  }
  return ans;

}

int main(){
  int num;
  cout<<"Enter number to find it's square root: ";
  cin>>num;
  cout<<endl;
  int ans=findsqurt(num);
  cout<<"Answer is: "<<ans<<endl;
  int precision;
  cout<<"Enter count of it's precision: ";
  cin>>precision;
  cout<<endl;
  double step=0.1;
  double finalAns=ans;

  for(int i=0;i<precision; i++){
    for(double j=finalAns; j*j<=num; j=j+step){
      finalAns=j;
    }
    step=step/10;
  }
  cout<<"Final Answer is: "<<finalAns<<endl;
  return 0;
}