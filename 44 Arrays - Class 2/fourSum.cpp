#include<iostream>
#include<vector>
using namespace std;

vector<int> fourSum(vector<int>arr, int sum){
  vector<int>sumArr;
  for(int i=0; i<arr.size(); i++){
    for(int j=i+1; j<arr.size();j++){
      for(int k=j+1; k<arr.size();k++){
        for(int l=k+1; l<arr.size(); l++){
          if(arr[i]+arr[j]+arr[k]+arr[l]==sum){
            sumArr.push_back(arr[i]);
            sumArr.push_back(arr[j]);
            sumArr.push_back(arr[k]);
            sumArr.push_back(arr[l]);
          }
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

  vector<int> arr3 = fourSum(arr, sum);
  cout << "[ ";
  for (int i = 0; i < arr3.size(); i++) {
    cout << arr3[i] << " ";
  }
  cout<<"]";
  cout << endl;

}