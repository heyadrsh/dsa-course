#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int>arr;

  //insert
  arr.push_back(1);
  arr.push_back(2);

  //print
  for(int i=0; i<arr.size(); i++){
    cout<<arr[i]<<endl;
  }

  //pop up/deletion

  arr.pop_back();
  for(int i=0; i<arr.size(); i++){
    cout<<arr[i]<<endl;
  }

  // int ans=(sizeof(arr)/(sizeof(int)));

  // cout<<ans<<endl;
  // cout<<arr.size()<<endl;
  // cout<<arr.capacity()<<endl;

  cout<<"____________________"<<endl;
  cout<<endl;
  

  // int n;
  // cout<<"Enter dynamic array size: ";
  // cin>>n;
  // // vector<int>brr(n,1);

  // // cout<<brr.size()<<endl;
  // // cout<<brr.capacity()<<endl;

  // // for(int i=0; i<brr.size(); i++){
  // //   cout<<brr[i]<<endl;
  // // }


  vector<int>crr{1,2,3,1,44,22,11,4,5,6,32,66};

  cout<<crr.size()<<endl;
  cout<<crr.capacity()<<endl;
  cout<<endl;

  for(int i=0; i<crr.size(); i++){
    cout<<crr[i]<<endl;
  }
  cout<<endl;

  cout<<crr.empty()<<endl;
  
  vector<int>drr;

  cout<<drr.empty()<<endl;
}