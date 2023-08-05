#include<iostream>
using namespace std;

int main(){
  int rowCount;
  cout<<"Enter row/s: ";
  cin>>rowCount;
  cout<<endl;

  for(int row=0; row<rowCount; row+=1){
    cout<<" "<<row+1;

    if(row==0){
      for(int num=2; num<rowCount+1; num+=1){
        cout<<" "<<num;
      }
    }
    else if(row==rowCount-1){
      cout<<"";
    }
    else{
      for(int space=0; space<rowCount-row-2; space+=1){
        cout<<"  ";
      }
      cout<<" "<<rowCount;
    }
    cout<<endl;
  }
}