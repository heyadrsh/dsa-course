#include<iostream>
using namespace std;

int main(){
  int rowCount;
  cout<<"Enter row/s: ";
  cin>>rowCount;

  for(int row=0;row<rowCount;row+=1){ //Upper Traingle with spaces
    for(int starLeft=0; starLeft<rowCount-row;starLeft+=1){
      cout<<"*";
    }
    for(int middleSpace=0; middleSpace<row*2; middleSpace+=1){
      cout<<" ";
    }
    for(int starRight=0;starRight<rowCount-row; starRight+=1){
      cout<<"*";
    }
    cout<<endl;
  }
  for(int row=0; row<rowCount;row+=1){ //lower Traingle with spaces
    for(int starLeft=0; starLeft<row+1; starLeft+=1){
      cout<<"*";
    }
    for(int middleSpace=0; middleSpace<(2*rowCount-(2*row+2)); middleSpace+=1){
      cout<<" ";
    }
    for(int starRight=0; starRight<row+1; starRight+=1){
      cout<<"*";
    }
    cout<<endl;
  }
}