#include<iostream>
#include<vector>

using namespace std;

int missingEle(vector<int>v){
  int start=v[0];
  int end=v.size()-1;
  int mid=start+(end-start)/2;

  while(start<=end){
    if(v[mid]==v[start]+mid){
      start=mid+1;
    }
    else{
      end=mid-1;
    }
    mid=start+(end-start)/2;
  }
  return v[end]+1;
}

int main(){
  vector<int>v{1,2,3,4,5,7,8};
  cout<<missingEle(v);
}