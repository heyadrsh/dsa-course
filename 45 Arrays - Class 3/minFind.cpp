#include<iostream>
using namespace std;

int minFind(int arr[][3], int rows, int cols){
  int min=INT16_MAX;

  for(int i=0; i<rows;i++){
    for(int j=0; j<cols; j++){
      if(min>arr[i][j]){
        min=arr[i][j];
      }
    }
  }
  return min;
}

int main(){
  int arr[3][3]={{1,2,3},{8,5,6},{7,2,10}};
  cout<<minFind(arr,3,3);
}