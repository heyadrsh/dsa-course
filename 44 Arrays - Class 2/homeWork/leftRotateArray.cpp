#include<iostream>
#include<vector>
using namespace std;

//defining function to ratate array by left
vector<int> leftRotate(vector<int>arr){
  if(arr.size()<=1){
    return arr;
  }

  int firstElement=arr[0];

  //rotating array
  for(int i=0; i<arr.size(); i++){
    arr[i]=arr[i+1];
  }
  arr[arr.size()-1]=firstElement;
  return arr;
}

//defining main()
int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;
  vector<int>arr1(n);
  vector<int>arr(n);


  //taking elements
  cout << "Enter Elements: " << endl;
  for (int i = 0; i < arr.size(); i++) {
    cout << i + 1 << ": "; 
    cin >> arr[i];
  }

  arr=leftRotate(arr); //rotating error

  //printing left rotated array
  cout << "[ ";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  cout<<"]";
}