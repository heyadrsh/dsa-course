#include<iostream>
using namespace std;

void linearSearch(int arr[][3], int rows, int cols, int searchEle){
  for(int i=0; i<rows;i++){
    for(int j=0; j<cols;j++){
      if(searchEle==arr[i][j]){
        cout<<"Found on Index "<<i<<","<<j<<endl;
        return;
      }
    }
  }
  cout<<"Not Found";
}

int main(){
  // int rows;
  // cout<<"Enter Rows: ";
  // cin>>rows;

  // int cols;
  // cout<<"Enter Columns: ";
  // cin>>cols;

  // cout<<"Enter elements: "<<endl;
  // int arr[rows][cols];
  // for(int i=0; i<rows;i++){
  //   for(int j=0; j<cols;j++){
  //     cout<<i<<","<<j<<" :";
  //     cin>>arr[i][j];
  //   }
  // }

  int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  int searchEle;
  cout<<"Enter Search Element: ";
  cin>>searchEle;

  linearSearch(arr, 3, 3, searchEle);
}