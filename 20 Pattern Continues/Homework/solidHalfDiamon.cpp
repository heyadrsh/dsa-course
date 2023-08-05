#include<iostream>
using namespace std;

int main(){
  int rowCount;
  cout<<"Enter row/s: ";
  cin>>rowCount;
  cout<<endl;

  for (int row=0; row<rowCount; row+=1){
    for(int star=0; star<row+1; star+=1){
      cout<<"*";
    }
    cout<<endl;
  }
  for(int row=0; row<rowCount-1; row+=1){
    for (int star=rowCount-row-1; star>0; star-=1){
      cout<<"*";
    }
    cout<<endl;
  }
}