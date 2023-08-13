#include<iostream>
using namespace std;

int print(int arr[], int size){
  for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
  }
}
void inc(int arr[], int size){
  arr[0]=arr[0]+10;
  print(arr,size);
}

int main(){
  int arr[]={1,2};
  int size=2;
  inc(arr,size);
  cout<<endl;
  print(arr,size);
}