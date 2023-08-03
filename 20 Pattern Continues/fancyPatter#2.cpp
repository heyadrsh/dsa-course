#include<iostream>
using namespace std;

int main(){
  int rowCount;
  cout<<"Enter row/s: ";
  cin>>rowCount;
  int number=1;
  int number1=rowCount;
  for(int row=0; row<rowCount; row+=1){
    for(int num=0; num<2*row+1; num+=1){
      if(num%2==0){
        cout<<number;
      }
      else{
        cout<<"*";
      }
    }
    number+=1;
    cout<<endl;
  }
  for (int row=0; row<rowCount;row+=1){
    for(int num=0; num<2*rowCount-2*row -1;num+=1){
      if(num%2==0){
        cout<<number1;
      }
      else{
        cout<<"*";
      }
    }
    number1-=1;
    cout<<endl;
  }
}