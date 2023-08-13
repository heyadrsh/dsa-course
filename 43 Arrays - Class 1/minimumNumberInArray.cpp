#include<iostream>
#include<limits.h>
using namespace std;

int minArray(int arr[], int size){
  int min=INT_MAX;
  for(int i=0; i<size; i++){
    if(min>arr[i]){
      min=arr[i];
    }
  }
  return min;
}

int main(){
  int size=5;
  int arr[size]={1,3,4,2,4};
  cout<<"Maximum value in the array is: "<<minArray(arr,size)<<"."<<endl;
}