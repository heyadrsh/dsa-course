// This code snippet generates a pyramid pattern of numbers and asterisks based on user input for the number of rows.
// The pattern is created using nested loops and if-else statements to alternate between printing numbers and asterisks.
// The variables are updated after each iteration to generate the correct pattern for the next row.

#include<iostream>
using namespace std;

int main(){
  int rowCount;
  cout<<"Enter row/s: ";
  cin>>rowCount;
  cout<<endl;
  int numIncInc=1;
  int numInc=1;
  int numDecDec=0;
  int numDec=0;
  int numvar=0;
  
  for(int row=0; row<rowCount; row+=1){
    for(int num=0; num<row+numIncInc; num+=1){
      if(num%2==0){
        cout<<numInc;
        numInc+=1;
        numDec=numIncInc+row;
        numvar=numDec;
      }
      else{
        cout<<"*";
      }
    }
    numIncInc+=1;
    cout<<endl;
  }
  for(int row=0; row<rowCount; row+=1){
    for(int num=0; num<2*rowCount-numDecDec-1; num+=1){
      if(num%2==0){
        cout<<numvar;
        numvar+=1;
        numDec-=1;
      }
      else{
        cout<<"*";
      }
    }
    numDecDec+=2;
    numDec+=1;
    numvar=numDec;
    cout<<endl;
  }
}