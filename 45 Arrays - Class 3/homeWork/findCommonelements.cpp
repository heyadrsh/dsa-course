#include<iostream>
#include<vector>
using namespace std;

int main(){
 vector<vector<int>>arr(3,vector<int>(3,0));  
 vector<vector<int>>brr(3,vector<int>(3,0));  
 vector<vector<int>>crr(3,vector<int>(3,0));  

 cout<<"Enter elements of array A: ";
 for(int i=0; i<arr.size(); i++){
    for(int j=0; j<arr[i].size(); j++){
      cout<<"Enter: ";
      cin>>arr[i][j];
    }
    cout<<endl;
 }

cout<<"Enter elements of array B: ";
 for(int i=0; i<brr.size(); i++){
    for(int j=0; j<brr[i].size(); j++){
      cout<<"Enter: ";
      cin>>brr[i][j];
    }
    cout<<endl;
 }

cout<<"Enter elements of array C: ";
 for(int i=0; i<crr.size(); i++){
    for(int j=0; j<crr[i].size(); j++){
      cout<<"Enter: ";
      cin>>crr[i][j];
    }
    cout<<endl;
 }

 for(int i=0; i<arr.size();i++){
  for(int j=0;j<arr[0].size();j++){
    if(arr[i][j]==brr[i][j] && brr[i][j]==crr[i][j]){
      cout<<arr[i][j]<<" ";
    }
  }
 }
}