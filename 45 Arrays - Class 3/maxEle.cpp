#include<iostream>
using namespace std;

int maxFind(int arr[][3], int rows, int cols){
  int max=INT16_MIN;

  for(int i=0; i<rows;i++){
    for(int j=0; j<cols; j++){
      if(max<arr[i][j]){
        max=arr[i][j];
      }
    }
  }
  return max;
}

int main(){
  int arr[3][3]={{1,2,3},{8,5,6},{7,2,0}};
  cout<<maxFind(arr,3,3);
}