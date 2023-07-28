#include<iostream>
using namespace std;

int main(){
  int rowCount;
  cout<<"Enter number of row: ";
  cin>>rowCount;

  for(int row=0; row<rowCount; row+=1){
    for(int col=1; col<=row+1; col+=1){
      cout<<" "<<col;
    }
  cout<<endl;
  }
}