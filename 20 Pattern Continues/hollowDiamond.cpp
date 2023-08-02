#include<iostream>
using namespace std;


int main(){
  int rowCount;
  cout<<"Enter row/s: "; //input rows
  cin>>rowCount;

  for (int row=0; row<rowCount; row+=1){ //first hollow half of diamond
    for (int spaces=0; spaces<rowCount-row-1; spaces+=1){ //printing spaces
      cout<<" ";
    }
    if(row==0){  //printing stars
      cout<<"*";
    }
    else{
      for (int stars=0; stars<2*row+1; stars+=1){
        if (stars==0 || stars==((2*row+1)-1)){
          cout<<"*";
        }
        else{
          cout<<" ";
        }
      }  
    }
    cout<<endl;
  }

  for(int row=0; row<rowCount; row+=1){ //printing second hollow half of diamond
    for(int spaces=row; spaces>0; spaces-=1){
      cout<<" ";
    }
    if(row==rowCount-1){
      cout<<"*";
    }
    else{
      for (int stars=0; stars<2*rowCount-2*row-1; stars+=1){
        if (stars==0 || stars==(2*rowCount-2*row-2)){
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