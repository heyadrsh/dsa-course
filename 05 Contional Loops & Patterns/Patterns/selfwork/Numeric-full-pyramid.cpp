#include<iostream>
using namespace std;

int main(){
  int rowCount;
  cout<<"Enter row/s count: ";
  cin>>rowCount;
  int sideN=0;
  int sideNN=1;
  int sideLN=0;
  int sideRN=0;
  for(int row=0; row<rowCount; row+=1){
    sideN+=1;
    sideLN=sideN;
    for(int space=0; space<(rowCount-(row+1)); space+=1){
      cout<<"  ";
    }
    for(int sideL=0; sideL<row; sideL+=1){
      cout<<sideLN<<" ";
      sideLN+=1;
      sideRN=sideLN;
    }
    sideN-=1;
    cout<<(2*row+1)<<" ";

    for(int sideR=0; sideR<row; sideR+=1){
      sideRN-=1;
      cout<<sideRN<<" ";
    }
    cout<<endl;
    sideN+=1;
  }
}