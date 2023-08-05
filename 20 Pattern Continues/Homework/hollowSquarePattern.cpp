#include<iostream>
using namespace std;

int main(){
  int rowCount;
  cout<<"Enter row/s: ";
  cin>>rowCount;
  cout<<endl;

  for(int row=0; row<rowCount; row+=1){
    for(int star=0; star<rowCount; star+=1){
      if(row==0 || row==rowCount-1){
        cout<<" * ";
      }
      else{
        if(row!=0 || row!=rowCount-1){
          if(star==0 || star==rowCount-1){
            cout<<" * ";
          }
          else{
            cout<<"   ";
          }
        }
      }
    }
    cout<<endl;
  }
}