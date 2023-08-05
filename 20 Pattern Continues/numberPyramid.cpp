#include<iostream>
using namespace std;

int main(){
  int rowCount;
  cout<<"Enter row/s: ";
  cin>>rowCount;


  for(int row=0; row<rowCount; row+=1){
    for(int number=1; number<row+2; number+=1){
      cout<<" "<<number;
    }
    for(int number1=row; number1>0; number1-=1){
      cout<<" "<<number1;
    }
    cout<<endl;
  }
}