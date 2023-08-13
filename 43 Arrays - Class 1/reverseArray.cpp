#include<iostream>
using namespace std;


// First Method
// int main(){
//   int size=9;
//   int arr[size]={10,20,30,40,50,60,70,80,90};
//   int start=0;
//   int end=size-1;
//   while(start<=end){
//     swap(arr[start],arr[end]);
//     start+=1;
//     end-=1;
//   }
  // cout<<"[";
  // for(int i=0; i<size; i++){
  //   cout<<arr[i]<<" ";
  // }
  // cout<<"]";
// } 

int main(){
  int size=9;
  int arr[size]={1,2,3,4,5,6,7,8,9};
  int arr1[size];
  for(int i=0; i<size; i++){
    arr1[i]=arr[(size-1)-i];
  }
  cout<<"[";
  for(int i=0; i<size; i++){
    cout<<arr1[i]<<" ";
  }
  cout<<"]";
}