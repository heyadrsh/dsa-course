#include<iostream>
using namespace std;

int main(){
  int rowCount;
  cout<<"Enter row/s: ";
  cin>>rowCount;
  cout<<endl;

  for(int row=0; row<rowCount; row+=1){
    cout<<1;
    if(row==rowCount-1){
      for(int number=2; number<rowCount+1; number+=1){
        cout<<" "<<number;
      }
    }
    else{
      for(int space=1; space<row; space+=1){
        cout<<"  ";
      }
    }
    if(row!=0 && row!=rowCount-1){
      cout<<" "<<row+1;
    }
    cout<<endl;
  }
}