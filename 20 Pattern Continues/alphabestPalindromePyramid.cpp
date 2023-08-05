#include<iostream>
using namespace std;

int main(){
  int rowCount;
  cout<<"Enter row/s: ";
  cin>>rowCount;


  for(int row=0; row<rowCount; row+=1){
    for(int number=1; number<row+2; number+=1){
      int ans=number+1;
      char ch=ans+'A'-2;
      cout<<" "<<ch;
    }
    for(int number1=row; number1>0; number1-=1){
      int ans=number1;
      char ch=ans+'A'-1;
      cout<<" "<<ch;
    }
    cout<<endl;
  }
}