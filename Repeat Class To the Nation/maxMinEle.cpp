#include<iostream>
using namespace std;



int MaxMin(string str, int arr[][3], int r, int c){
  if(str=="Max"){
    int Max=arr[0][0];
    for(int i=0; i<r; i++){
      for(int j=0;j<c;j++){
        if(arr[i][j]>Max){
          Max=arr[i][j];
        }
      }
    }
    return Max;
  }
  if(str=="Min"){
    int Min=arr[0][0];
    for(int i=0; i<r; i++){
      for(int j=0;j<c;j++){
        if(arr[i][j]<Min){
          Min=arr[i][j];
        }
      }
    }
    return Min;
  }
}

int main() {
  string str;
  cout<<"Min/Max: ";
  cin>>str;

	int r, c;
	cout << "Enter the number of rows and columns: ";
	cin >> r >> c;
	int arr[r][c];
	cout << "Enter the elements of the array: ";
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> arr[i][j];
		}
	}

	MaxMin(str, arr, r, c);
}