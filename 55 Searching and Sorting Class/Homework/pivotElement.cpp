#include<iostream>
#include<vector>
#include<stdio.h>

using namespace std;

int pivotEle(vector<int>arr){
  int rS;
  int lS;
  int start=arr[0];
  int end=arr.size()-1;
  int mid=(start+(end-start)/2);

  while(start<=end){
    //for left sum
    for (int i=0; i<=mid;i++){
      lS+=arr[i];
    }
    //for right sum
    for(int i=mid; i<=end;i++){
      rS+=arr[i];
    }
    if(lS==rS){
      return mid;
    }
    else if(lS<rS){
      start=mid+1;
    }
    else{
      end=mid-1;
    }
  }
}

int main(){
  vector<int>arr{1,2,2,2,2,3,4,5};
  cout<<"The Pivot Element is: "<<arr[pivotEle(arr)]<<" at index of "<<pivotEle(arr)<<"."<<endl;
}