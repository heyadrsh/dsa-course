#include<iostream>
using namespace std;

int transposeArray(int arr[][3], int row, int col, int transpose[][3]) {
  for (int i = 0; i < col; i++) {
    for (int j = 0; j < row; j++) {
      transpose[i][j] = arr[j][i];
    }
  }
}


int rotateArray90(int arr[][3], int row, int col){
  int transpose[row][col];
  transposeArray(arr, row, col, transpose);

  for(int i=0; i<row;i++){
    for(int j=0; j<col; j++){
      cout<<transpose[i][j];
    }
  }
}




int main(){
  int rows;
  cout<<"Enter rows: ";
  cin>>rows;

  int cols;
  cout<<"Enter cols: ";
  cin>>cols; 

  int arr[rows][cols];

  for(int i=0; i<rows;i++){
    for(int j=0; j<cols; j++){
      cin>>arr[i][j];
    }
  }
  rotateArray90(arr,3,3);
}