#include<iostream>
#include<vector>
using namespace std;

int main(){
 vector<vector<int>>arr(3,vector<int>(3,0));  
 vector<vector<int>>brr(3,vector<int>(3,0));  
 vector<vector<int>>crr(3,vector<int>(3,0));  

 cout<<"Enter elements of array A: "<<endl;
 for(int i=0; i<arr.size(); i++){
    for(int j=0; j<arr[i].size(); j++){
      cout<<"Enter: ";
      cin>>arr[i][j];
    }
    cout<<endl;
 }

cout<<"Enter elements of array B: "<<endl;
 for(int i=0; i<brr.size(); i++){
    for(int j=0; j<brr[i].size(); j++){
      cout<<"Enter: ";
      cin>>brr[i][j];
    }
    cout<<endl;
 }

cout<<"Enter elements of array C: "<<endl;
 for(int i=0; i<crr.size(); i++){
    for(int j=0; j<crr[i].size(); j++){
      cout<<"Enter: ";
      cin>>crr[i][j];
    }
    cout<<endl;
 }

 cout<<"Common elemets are: ";
 for(int i=0; i<arr.size();i++){
  for(int j=0;j<arr[0].size();j++){
    for(int k=0;k<brr.size();k++){
      for(int l=0; l<brr[0].size();l++){
        if(arr[i][j]==brr[k][l]){
          for(int m=0; m<crr.size();m++){
            for(int n=0; n<crr[0].size();n++){
              if(brr[k][l]==crr[m][n]){
                cout<<crr[m][n]<<" ";
              }
            }
          }
        }
      }
    }
  }
 }
}