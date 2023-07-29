#include<iostream>
using namespace std;

int main(){
  int rowCount;
  cout<<"Enter row/s count: ";
  cin>>rowCount;

  for(int row=0; row<rowCount; row+=1){
    for(int space=0; space<row; space+=1){
      cout<<" ";
    }
    for(int star=0; star<(rowCount-row); star+=1){
      cout<<"* ";
    }
    cout<<endl;
  }
}