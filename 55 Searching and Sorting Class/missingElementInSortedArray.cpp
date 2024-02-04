#include<iostream>
#include<vector>

using namespace std;

int missingEle(vector<int>v){
  int start=0;
  int end=v.size()-1;
  int mid=(start+end)/2;

  while(start<=end){
    if(v[mid]==v[0]+mid){
      start=mid+1;
    }
    else{
      end=mid-1;
    }
    mid=(end+start)/2;
  }
	return v[mid+1]-1;
}

int main(){
  vector<int>v{1,2,3,4,5,7,8};
  cout<<missingEle(v);
}