#include<iostream>
using namespace std;

int main(){
  int row, col;
  cout<<"enter rows: ";
  cin>>row;
  cout<<"enter columns: ";
  cin>>col;
  for (int i=0; i<row;i+=1){
    if(i==0 || i==(row-1)){
      for(int j=0; j<col; j+=1){
        cout<<"* ";
      }
    }
    else{
      for(int j=0; j<col;j+=1){
        if (j==0 || j==(col-1)){
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