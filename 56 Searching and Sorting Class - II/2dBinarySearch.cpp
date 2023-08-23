#include<iostream>
using namespace std;


int binarySearch(int arr[][4], int rows, int col, int target){
  int s=0;
  int e=rows*col-1;
  int mid=s+(e-s)/2;

  while(s<=e){
    int rowIndex=mid/col;
    int colIndex=mid%col;

    if(arr[rowIndex][colIndex]==target){
      cout<<"target is at "<<rowIndex<<" "<<colIndex<<endl;
      return true;
    }
    if (arr[rowIndex][colIndex]<target){
      s=mid+1;
    }
    if(arr[rowIndex][colIndex]>target){
      e=mid-1;
    }
    mid=s+(e-s)/2;
  }
  return false;
}
int main(){
  int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12,},{13,14,15,16},{17,18,19,20}};
  int rows=5;
  int col=4;
  int target;
  cout<<"Enter target:  ";
  cin>>target;
  bool ans=binarySearch(arr,rows,col,target);

  if(ans){
    cout<<"Found!"<<endl;
  }
  else{
    cout<<"Not Found"<<endl;
  }
}