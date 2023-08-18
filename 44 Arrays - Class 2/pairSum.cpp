#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSome(vector<int>arr, int sum){
  vector<int>ans;
  for(int i=0; i<arr.size(); i++){
    for(int j=1; j<arr.size()-1; j++){
      if(sum==arr[i]+arr[j]){
        ans.push_back(arr[i]);
        ans.push_back(arr[j]);
        return ans;
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

  int sum;
  cout<<"Enter sum: ";
  cin>>sum;

  vector<int> arr3 = pairSome(arr, sum);
  cout << "[ ";
  for (int i = 0; i < arr3.size(); i++) {
    cout << arr3[i] << " ";
  }
  cout<<"]";
  cout << endl;
}
