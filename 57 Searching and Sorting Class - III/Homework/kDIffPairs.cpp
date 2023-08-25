#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int kdiff(vector<int>arr,int k){
  sort(arr.begin(),arr.end());
  int count=0;
  int counted_pairs=set();


}

int main(){
  vector<int>arr{3,1,4,1,5};
  int k=2;
  cout<<"No. of pairs with k differnce ="<<kdiff(arr,k)<<" ."<<endl;
}