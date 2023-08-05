#include<iostream>
using namespace std;

int main(){
  int rowCount;
  cout<<"Enter row/s: ";
  cin>>rowCount;
  cout<<endl;
  
  for(int row=0; row<rowCount; row+=1){
    for(int ispace=0; ispace<rowCount-row;ispace+=1){
      cout<<"   ";
    }
    for(int star=0; star<2*row-1; star+=1){
      if(row==0 || row==rowCount-1 || star==0 || star==2*row-2){
        cout<<" * ";
      }
      else{
        cout<<"   ";
      }
    }
    cout<<endl;
  }
}