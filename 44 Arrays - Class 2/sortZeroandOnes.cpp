#include<iostream>
#include<vector>
using namespace std;

vector<int> sortZeroOne(vector<int>arr){
  int start=0;
  int end=arr.size()-1;
  int i=0;

  while(i!=end){
    if(arr[i]==0){
      swap(arr[start],arr[i]);
      i++;
      start++;
    }
    else{
      swap(arr[i], arr[end]);
      end--;
    }

  }
  return arr;
}

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;

  vector<int> arr(n);
  cout << "Enter Elements: " << endl;
  for (int i = 0; i < arr.size(); i++) {
    cout << i + 1 << ": "; 
    cin >> arr[i];
  }
  arr= sortZeroOne(arr);
  cout << "[ ";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  cout<<"]";
  cout << endl;
}
