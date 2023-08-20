#include<iostream>
using namespace std;

int main(){
  int arr[4][3];
  
  //row-wise input
  for(int i=0; i<4; i++){
    for(int j=0;j<3; j++){
      cin>>arr[i][j];
    }
  }
  //row-wise print
  for(int i=0; i<4; i++){
    for(int j=0; j<3; j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

  //row-wise input
  for(int i=0; i<4; i++){
    for(int j=0;j<3; j++){
      cin>>arr[j][i];
    }
  }
  //row-wise print
  for(int i=0; i<4; i++){
    for(int j=0; j<3; j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }


}