#include<iostream>
using namespace std;

int main(){
  int rowCount;
  cout<<"Enter row/s: ";
  cin>>rowCount;
  cout<<endl;
  int numIncDec=0;
  int numDecDec=rowCount-2;

  for (int row=0; row<2*rowCount+1; row+=1){
    cout<<"*";
    if(row>=1 && row<rowCount+1){
      for(int numInc=0; numInc<row; numInc+=1){
        cout<<" "<<numInc+1;
      }
      for(int numDec=row-1; numDec>0; numDec-=1){
        cout<<" "<<numDec;
      }
      cout<<" "<<"*";
    }
    if(row>=rowCount+1){
      for(int numInc=1; numInc<rowCount-numIncDec; numInc+=1){
        cout<<" "<<numInc;
      }
      numIncDec+=1;
      for(int numDec=numDecDec; numDec>0; numDec-=1){
        cout<<" "<<numDec;
      }
      numDecDec-=1;
      cout<<" "<<"*";
    }
    cout<<endl;
  }
}