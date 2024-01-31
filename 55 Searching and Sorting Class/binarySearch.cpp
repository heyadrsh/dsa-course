#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// int binarySearch(int arr[],int size, int target){
//   int start=0;
//   int end=size-1;
//   int mid=(start+end)/2;

//   while(start<=end){
//     int element =arr[mid];
//     if(element==target){
//       return mid;
//     }
//     else if(target<element){
//       end=mid-1;
//     }
//     else{ 
//       start=mid+1;
//     }
//     mid=(start+end)/2;
//   }
//   return -1;
// }

// int main(){
//   int arr[]={1,2,3,4,5,6,7};
//   int target=7;
//   int size=10;

//   int index=binarySearch(arr,size,target);

//   if(index==-1){
//     cout<<"Element not found";
//   }
//   else{
//     cout<<"Element found at "<<index<<".";
//   }
// }
int main(){
  vector<int>v{1,2,3,4,5,6};
  if(binary_search(v.begin(), v.end(),3)){
    cout<<"Found";
  }
  else{
    cout<<"Not Found";
  }

}