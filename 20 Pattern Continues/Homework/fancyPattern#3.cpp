#include<iostream>
using namespace std;

int main(){
  int rowCount;
  cout<<"Enter row/s: ";
  cin>>rowCount;
  cout<<endl;

  for (int row=0; row<rowCount; row+=1){
    cout<<"*";
    if(row!=0 || row!=rowCount-row){
      for(int numLeft=1; numLeft<row+1; numLeft+=1){
        cout<<" "<<numLeft;
      }
      for(int numRight=row-2+1; numRight>0; numRight-=1){
        cout<<" "<<numRight;
      }
      cout<<" *";
    }
    cout<<endl;
  }
}