#include<iostream>
using namespace std;

int main(){
  int rowCount;
  cout<<"Enter row count: ";
  cin>>rowCount;

  for(int row=0; row<rowCount; row+=1){
    for( int col=0; col<row+1; col+=1){
      cout<<"*";
    }

    cout<<endl;
  }
}
