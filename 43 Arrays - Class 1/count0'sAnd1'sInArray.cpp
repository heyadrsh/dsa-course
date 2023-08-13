#include<iostream>
using namespace std;

void count(int arr[], int size){
  int count0=0;
  int count1=0;
  for(int i=0; i<size; i++){
    if(arr[i]==0){
      count0+=1;
    }
    if(arr[i]==1){
      count1+=1;
    }
  }
  cout<<"Total number of Zeroes are: "<<count0<<endl;
  cout<<"Total number of Ones are: "<<count1<<endl;
}

int main(){
  int size=10;
  int arr[size]={1,1,1,0,0,1,1,0,0,1};
  count(arr,size);
}