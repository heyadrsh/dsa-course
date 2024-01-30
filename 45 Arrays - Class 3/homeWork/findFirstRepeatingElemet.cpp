#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){
 vector<vector<int>>arr(3,vector<int>(3,0));
 unordered_set<int> printed; // Set to keep track of printed elements

 for(int i=0; i<arr.size(); i++){
    for(int j=0; j<arr[i].size(); j++){
      cout<<"Enter: ";
      cin>>arr[i][j];
    }
    cout<<endl;
 }

 cout<<"First Repeating element is: "<<endl;

 for(int i=0; i<arr.size();i++){
    for(int j=0; j<arr[0].size();j++){
      for(int k=0; k<arr.size();k++){
        for(int l=0; l<arr[0].size();l++){
          if (i==k&&j==l){
            continue;
          }
            if(arr[i][j]==arr[k][l]){
              if(printed.count(arr[k][l]) == 0) { // Check if the element has been printed before
                cout<<arr[k][l];
                printed.insert(arr[k][l]); // Add the element to the set of printed elements
              }
            }
        }
      }
    }
 }
}
