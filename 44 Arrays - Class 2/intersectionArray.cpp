#include <iostream>
#include <vector>
using namespace std;

vector<int> intersectionArray(vector<int>arr1, vector<int>arr2){
  vector<int>arr3;
  int chooseSize=0;
  int chooseSize1=0;
  int count=0;
  if(arr1.size()<arr2.size()){
    chooseSize=arr1.size();
    chooseSize1=arr2.size();
  }
  else{
    chooseSize=arr2.size();
    chooseSize1=arr1.size();
  }

  arr3.resize(0);

  for(int i=0; i<chooseSize; i++){
    for(int j=0; j<chooseSize1; j++){
      if(arr1[i]==arr2[j]){
        bool duplicate=false;
        for(int k=0; k<arr3.size(); k++){
          if(arr3[k]==arr1[i] || arr3[k]==arr2[j]){
            duplicate=true;
            break;
          }
        }
        if (duplicate==0){
          arr3.push_back(arr1[i]);
          count+=1;
        }
      }
      else{
        continue;
      }
    }
  }
  return arr3;
}

int main() {
  int x;
  cout << "Enter x_length: ";
  cin >> x;

  vector<int> arr1(x);
  cout << "Enter Elements: " << endl;
  for (int i = 0; i < arr1.size(); i++) {
    cout << i + 1 << ": "; 
    cin >> arr1[i];
  }

  int y;
  cout << "Enter y_length: ";
  cin >> y;

  vector<int> arr2(y);
  cout << "Enter Elements: " << endl;
  for (int i = 0; i < arr2.size(); i++) {
    cout << i + 1 << ": ";
    cin >> arr2[i];
  }

  vector<int> arr3 = intersectionArray(arr1, arr2);
  cout << "Intersection: ";
  for (int i = 0; i < arr3.size(); i++) {
    cout << arr3[i] << " ";
  }
  cout << endl;
}
