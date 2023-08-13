#include<iostream>
#include<limits.h>
using namespace std;

int maxArray(int arr[], int size){
  int max=INT_MIN;
  for(int i=0; i<size; i++){
    if(max<arr[i]){
      max=arr[i];
    }
  }
  return max;
}

int main(){
  int size=5;
  int arr[size]={1,3,4,2,4};
  cout<<"Maximum value in the array is: "<<maxArray(arr,size)<<"."<<endl;
}