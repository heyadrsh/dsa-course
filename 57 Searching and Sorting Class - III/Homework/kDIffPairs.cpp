#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

///Two pointers method
// int findPairs(vector<int>& nums, int k) {
//   sort(nums.begin(), nums.end());
//   int i=0, j=1;
//   set<pair<int,int>>ans;
//   while(j<nums.size()){
//     int diff =nums[j]-nums[i];
//     if(diff==k){
//       ans.insert({nums[i],nums[j]});
//       ++i, ++j;
//       }else if(diff>k){
//         i++;
//         }else{
//           j++;
//           }
//           if(i==j){
//             j++;
//             }
//     }
//             return ans.size();
// };

// int main(){
//   vector<int>nums{3,1,4,1,5};
//   int k=2;
//   cout<<"No. of pairs found: "<<findPairs(nums,k);
// }


///Binary Search method

int binarySearch(vector<int>nums, int s, int x){
  int e=nums.size()-1;
  while(s<=e){
    int m=s+(e-s)/2;
    if(nums[m]==x){
      return m;
    }else if(x>nums[m]){
      s=m+1;
    }
    else{
      e=m-1;
    }
  }
  return -1;
}

int main(){
  vector<int>nums{3,1,4,1,5};
  int k=2;
  set<pair<int,int>>ans;

  for (int i=0; i<nums.size(); i++){
    if(binarySearch(nums, i+1, nums[i]+k) != -1){
      ans.insert({nums[i],nums[i]+k});
    }
  }
  cout<<ans.size();
}