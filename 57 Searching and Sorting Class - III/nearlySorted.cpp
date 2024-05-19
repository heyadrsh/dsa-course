#include<iostream>
#include<vector>
using namespace std;

int nearlyBinary(vector<int>arr,int target){
  int s=0;
  int e=arr.size()-1;
  int mid=s+(e-s)/2;

  while(s<=e){
    if(arr[mid]==target){
      return mid;
    }
    if(mid-1>=s && arr[mid-1]==target){
      return mid-1;
    }
    if(mid+1<e && arr[mid+1]==target){
      return mid+1;
    }
    if(arr[mid]>target){
      e=mid-2;
    }
    else{
      s=mid+2;
    }
    mid=s+(e-s)/2;
  }
  return -1;
}
int main(){
  vector<int>arr{10,3,40,20,50,80,70};
  int target;
  cout<<"Enter Target: ";
  cin>>target;
  int ans=nearlyBinary(arr,target);

 cout<<"Index of the target "<<target<<" is present at the index "<<ans<<"."<<endl;
}