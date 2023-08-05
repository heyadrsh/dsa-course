#include<iostream>
using namespace std;

int main(){
  int rowCount;
  cout<<"Enter row/s: ";
  cin>>rowCount;
  cout<<endl;



  for(int row=0; row<rowCount; row+=1){
    for(int space=0; space<rowCount-row; space+=1){
      cout<<"  ";
    }
    if(row==0){
      cout<<" "<<row+1;
    }
    else{
      for(int numLeft=1; numLeft<row+2; numLeft+=1){
        cout<<" "<<numLeft;
      }
      for(int numRight=row; numRight>0; numRight-=1){
        cout<<" "<<numRight;
      }
    }
    cout<<endl;
  }
}