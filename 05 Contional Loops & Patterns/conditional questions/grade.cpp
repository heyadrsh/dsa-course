#include<iostream>
using namespace std;
//nested if
int main(){
  int marks;
  cout<<"enter marks: ";
  cin>>marks;
  if (marks>=95){
    cout<<"O"<<endl;
  }
  else{
    if(marks>=90){
      cout<<"A"<<endl;
    }
    else{
      if(marks>=80){
        cout<<"B"<<endl;
      }
      else {
        if(marks>=60){
          cout<<"C"<<endl;
        }
        else{
          if(marks>=40){
            cout<<"D"<<endl;
          }
          else{
              cout<<"F"<<endl;
          }
        }
      }
    }
  }
}