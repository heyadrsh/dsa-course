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

  for(int i=0; i<arr.size(); i++){
    for(int j=0; j<arr[0].size();j++){
      if(i%2==0){
        cout<<arr[j][i]<<" ";
      }
      else{
        cout<<arr[2-j][i]<<" ";
      }
    }
  }
}