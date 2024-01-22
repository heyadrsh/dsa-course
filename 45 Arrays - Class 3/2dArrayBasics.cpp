 #include<iostream>
#include<vector>
using namespace std;

int main(){

  //decalaration
  int arr[56][27];

  //intialization
  int brr[3][3]={
    {1,2,3},
    {4,5,6},
    {7,8,9}};

    //row-wise print
  cout<<"Row-wise: "<<endl<<endl;
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      cout<<brr[i][j]<<" ";
    }
    cout<<endl;
  }


  cout<<"______________________________"<<endl;
  cout<<endl;
    //column-wise print
  cout<<"column-wise: "<<endl<<endl;
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      cout<<brr[j][i]<<" ";
    }
    cout<<endl;
  }
} 