#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;


int main(){
  vector<vector<int>>arr(5,vector<int>(5,-8));

  for(int i=0; i<arr.size();i++){
    for(int j=0; j<arr[0].size();j++){
      cout<<arr[i][j];
    }
    cout<<endl;
  }

  cout<<"the value at 2nd row and 3rd column is: "<<arr[2][3]<<endl;
}