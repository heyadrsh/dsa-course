#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<vector<int>>arr(3,vector<int>(3,0));

  for(int i=0; i<arr.size(); i++){
    for(int j=0; j<arr[i].size(); j++){
      cout<<"Enter: ";
      cin>>arr[i][j];
    }
    cout<<endl;
  }

  cout<<"Duplicated elements are: "<<endl;

  for(int i=0; i<arr.size();i++){
    for(int j=0; j<arr[0].size();j++){
      for(int k=0; k<arr.size();k++){
        for(int l=0; l<arr[0].size();l++){
          if (k==l){
            continue;
          }
          if(arr[i][j]==arr[k][l]){
            cout<<arr[k][l];
          }
        }
      }
    }
  }
} 