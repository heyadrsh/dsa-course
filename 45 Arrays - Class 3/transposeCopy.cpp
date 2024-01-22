#include<iostream>
#include<stdio.h>
using namespace std;

void transposeMatrix(int arr[][4], int row, int col, int transpose[][4]){
  for(int i=0; i<col;i++){
    for(int j=0; j<row; j++){
      transpose[j][i]=arr[i][j];
    }
  }
}

int main(){
  int arr[3][4]={{1,2,3,10},{4,5,6,11},{7,8,9,12}};
  int transpose[3][4];

  transposeMatrix(arr,4,33w,transpose);

  for(int i=0; i<4;i++){
    for(int j=0; j<3;j++){
      cout<<transpose[i][j]<<" ";
    }
    cout<<endl;
  }
}
