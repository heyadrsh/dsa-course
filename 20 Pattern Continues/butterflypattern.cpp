#include<iostream>
using namespace std;

int main(){
  int rowCount;
  cout<<"Enter row/s: ";
  cin>>rowCount;
  cout<<endl;
  
  for(int row=0; row<rowCount; row+=1){
    for(int starRight=0; starRight<row+1;starRight+=1){
      cout<<" "<<"*";
    }
    for(int space=0; space<2*rowCount-2*(row+1); space+=1){
      cout<<"  ";
    }
    for(int starLeft=0; starLeft<row+1; starLeft+=1){
      cout<<" "<<"*";
    }
    cout<<endl;
  }
  for(int row=0; row<rowCount; row+=1){
    for(int starRight=rowCount-row; starRight>0; starRight-=1){
      cout<<" "<<"*";
    }
    for(int space=0; space<2*row; space+=1){
      cout<<"  ";
    }
    for(int starLeft=rowCount-row; starLeft>0; starLeft-=1){
      cout<<" "<<"*";
    }
    cout<<endl;
  }
}