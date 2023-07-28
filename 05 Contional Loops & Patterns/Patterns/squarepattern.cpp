#include<iostream>
using namespace std;

int main(){
  int side;
  cout<<"Enter a side: ";
  cin>>side;

  for(int row=0; row<side; row+=1){
    for(int col=0; col<side; col+=1){
      cout<<"* ";
    }
    cout<<endl;
  }
}