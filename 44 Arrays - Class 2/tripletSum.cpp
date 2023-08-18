#include<iostream>
#include<vector>
using namespace std;

vector<int> tripletSum(vector<int>arr, int sum){
  vector<int>sumArr;
  for(int i=0; i<arr.size(); i++){
    for(int j=i+1; j<arr.size();j++){
      for(int k=j+1; k<arr.size();k++){
        if(arr[i]+arr[j]+arr[k]==sum){
          sumArr.push_back(arr[i]);
          sumArr.push_back(arr[j]);
          sumArr.push_back(arr[k]);
        }
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

  vector<int> arr3 = tripletSum(arr, sum);
  cout << "[ ";
  for (int i = 0; i < arr3.size(); i++) {
    cout << arr3[i] << " ";
  }
  cout<<"]";
  cout << endl;

}