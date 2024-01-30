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
 int temp=arr[0][0]-1;

 cout<<"Missing elements are: "<<endl;

 for(int i=0; i<arr.size();i++){
    for(int j=0; j<arr[0].size();j++){
      temp+=1;
      if(temp==arr[i][j]){
        continue;
      }
      if(temp!=i){
        cout<<temp<<" ";
        temp+=1;
      }
    }
 }
}
