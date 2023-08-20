#include<iostream>
#include<vector>
using namespace std;

int minElement(vector<int>arr){
  int min=arr[0];
  for(int i=0; i<arr.size(); i++){
    if(min>arr[i]){
      min=arr[i];
    }
  }
  return min;
}

int maxElementDay(vector<int>arr){
  int max=arr[1];
  int day=0;
  for(int i=1; i<arr.size(); i++){
    if(max<arr[i]){
      max=arr[i];
      day=i+1;
    }
  }
  return day;
}

int buySellStock(vector<int>arr){
  for(int i=0; i<arr.size(); i++){
    if(i==0){
      continue;
    }
    else{
      if(minElement(arr)==arr[arr.size()-1]){
        return 0;
      }
      else{
        return maxElementDay(arr);
      }
    }
  }
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
  cout<<buySellStock(arr)<<endl;
}