#include<iostream>
#include<vector>
using namespace std;


int findUnique(vector<int>arr){
  int element=0;
  for(int i=0; i<arr.size();i++){
    element=element^arr[i];
  }
  return element;
}

int main(){ 
  int n;
  cout<<"Enter n: ";
  cin>>n;

  vector<int>arr( n);
  cout<<"Enter Elements: "<<endl;
  for (int i=0; i<arr.size();i++){
    cout<<i+1<<": ";
    cin>>arr[i];
  }
  int uniqueElement =findUnique(arr);
  cout<<"Unique Element is: "<<uniqueElement<<endl;
}