#include<iostream>
using namespace std;

int main(){
  int rowCount;
  cout<<"Enter row/s: ";
  cin>>rowCount;
  cout<<endl;

  for(int row=0; row<rowCount; row+=1){
    for(int star=0; star<rowCount-row; star+=1){
      if(row==0){
        cout<<"*";
      }
      else if(row==rowCount-1){
        cout<<"*";
      }
      else{
        if(star==0){
          cout<<"*";
        }
        else if(star==rowCount-row-1){
          cout<<"*";
        }
        else{
          cout<<" ";
        }
      }
    }
    cout<<endl;
  }
}