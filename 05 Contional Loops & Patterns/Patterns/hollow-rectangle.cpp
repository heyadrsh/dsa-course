#include<iostream>
using namespace std;

int main(){
  for (int row=0; row<3;row+=1){
    if(row==0 || row==2){
      for(int col=0; col<5; col+=1){
        cout<<"* ";
      }
    }
    else{
      for(int col=0; col<5;col+=1){
        if (col==0 || col==4){
          cout<<"* ";
        }
        else{
          cout<<"  ";
        }
      }
    }
  cout<<endl;
  }
}