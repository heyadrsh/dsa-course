#include<iostream>
using namespace std;


//printing solid rectangle
int main(){
  for(int col=0;col<5;col+=1){ //outer loop=rows
    for(int rows=0; rows<3;rows+=1){ //inner loop=column
      cout<<"*";
    }
    cout<<endl;
  }
}