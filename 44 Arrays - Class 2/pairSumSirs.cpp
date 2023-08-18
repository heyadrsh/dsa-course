#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int>arr, int sum){
  vector<int>sumArr;
  for(int i=0; i<arr.size(); i++){
    for(int j=i+1; j<arr.size();j++){
      if(arr[i]+arr[j]==sum){
        sumArr.push_back(arr[i]);
        sumArr.push_back(arr[j]);
      }
    }
  }
  return sumArr;
}


int main(){
    int n;
  cout << "Enter n: ";
  cin >> n;

  vector<int> arr(n);
  cout << "Enter Elements: " << endl;
  for (int i = 0; i < arr.size(); i++) {
    cout << i + 1 << ": "; 
    cin >> arr[i];
  }

  int sum;
  cout<<"Enter sum: ";
  cin>>sum;

  vector<int> arr3 = pairSum(arr, sum);
  cout << "[ ";
  for (int i = 0; i < arr3.size(); i++) {
    cout << arr3[i] << " ";
  }
  cout<<"]";
  cout << endl;

}