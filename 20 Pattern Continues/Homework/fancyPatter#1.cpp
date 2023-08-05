#include<iostream>
using namespace std;

int main(){
  int rowCount;
  cout<<"Enter row/s: ";
  cin>>rowCount;
  cout<<endl;

  for(int row=0; row<rowCount; row+=1){
    for(int star=0; star<rowCount+3-(row); star+=1){
      cout<<"*";
    }
    for(int numStar=0; numStar<2*row+1; numStar+=1){
      if(numStar%2==0){
        cout<<row+1;
      }
      else{
        cout<<"*";
      }
    }

    for(int star=0; star<rowCount+3-(row); star+=1){
      cout<<"*";
    }
    cout<<endl;
  }
}