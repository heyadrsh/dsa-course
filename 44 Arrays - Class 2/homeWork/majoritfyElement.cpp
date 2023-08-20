#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>arr){
  for(int i=0; i<arr.size(); i++){
    int count=0;
    for(int j=0; j<arr.size();j++){
      if(arr[i]==arr[j]){
        count+=1;
      }
      if(count>arr.size()/2){
        return arr[i];
      }
    }
  }
  return 0;
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

  cout<<"[ "<<majorityElement(arr)<<" ]"<<endl;
}