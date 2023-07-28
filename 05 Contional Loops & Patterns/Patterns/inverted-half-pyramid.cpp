#include<iostream>
using namespace std;

int main(){
  int rowCount;
  cout<<"Enter row count: ";
  cin>>rowCount;

//first method
  for(int row=rowCount;row>0;row-=1){
    for(int col=0; col<row;col+=1){
      cout<<"*";
    }
  cout<<endl;
  }

//second method
  for (int row=0; row<rowCount; row+=1){
    for(int col=rowCount-row; col>0; col-=1){
      cout<<"*";
    }
  cout<<endl;
  }
}