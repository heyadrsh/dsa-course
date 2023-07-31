#include<iostream>
using namespace std;

int main(){
  int rowCount;
  cout<<"Enter row/s count: ";
  cin>>rowCount;
  int leftSideNumberN=2;
  int middleLastNumbersline=2;

  for(int row=0; row<rowCount; row+=1){
    for(int leftSideSpace=0; leftSideSpace<rowCount-(row+1); leftSideSpace+=1){
      cout<<"  ";      
    }
    cout<<1<<" ";
    for(int middleSpace=0; middleSpace<(row); middleSpace+=1){
      if( row!=(rowCount-1) && row!=1){
        cout<<"    ";
      }
      else{
        if(row==1){
          cout<<"   ";
        }
      else{
        if(row==(rowCount-1)){
          for(int middleLastNumbers=0; middleLastNumbers<(1); middleLastNumbers+=1){
            cout<<"  "<<middleLastNumbersline<<"  ";
            middleLastNumbersline+=1;
      }
          }
        }
      }

    }
      if(row==0 || row==rowCount-1){
        cout<<"";
      }
      else{
        cout<<""<<leftSideNumberN;
        leftSideNumberN+=1;
      }
    cout<<endl;
  }
}