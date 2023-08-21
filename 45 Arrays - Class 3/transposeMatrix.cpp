#include<iostream>
#include<vector>
using namespace std;

void transposeMatrix(int arr[][3], int row, int col, int transpose[][3]){
  for(int i=0; i<col;i++){
    for(int j=0;j<row;j++){
      transpose[j][i]=arr[i][j];
    }
  }
}

int main(){
  int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  int transpose[3][3];

  transposeMatrix(arr,3,3,transpose);

  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      cout<<transpose[i][j]<<" ";
    }
    cout<<endl;
  }
}