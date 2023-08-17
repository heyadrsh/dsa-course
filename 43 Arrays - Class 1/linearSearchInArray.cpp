#include<iostream>
using namespace std;

bool findValue(int arr[], int size, int value){
  for(int i=0; i<size;i++){
    if(arr[i]==value){
      return true;
    }
  }
  return false;
}

int main(){
  int arr[10]={1,4,52,53,53,43,1,5,9,8};
  if(findValue(arr,10,12)){
    cout<<"Found"<<endl;
  }
  else{
    cout<<"Not Found";
  }
}