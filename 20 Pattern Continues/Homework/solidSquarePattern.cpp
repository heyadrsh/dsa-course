#include<iostream>
using namespace std;

int main(){
  int rowCount;
  cout<<"Enter row/s: ";
  cin>>rowCount;

  for(int row=0; row<rowCount; row+=1){
    for(int star=0; star<rowCount; star+=1){
      cout<<" * ";
    }
    cout<<endl;
  }
}