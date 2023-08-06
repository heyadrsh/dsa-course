#include<iostream>
using namespace std;

int main(){
  int rowCount;
  cout<<"Enter row/s: ";
  cin>>rowCount;
  cout<<endl;
  int nums=1;
  
  for(int row=0; row<rowCount; row+=1){
    for(int num=0; num<row+1; num+=1){
      cout<<" "<<nums;
      nums+=1;
    }
    cout<<endl;
  }
}