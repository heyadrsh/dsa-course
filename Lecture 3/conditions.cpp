#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    if (a>0){
        cout<<a<<" is positive"<<endl;
    }
    else if(a<0){
        cout<<a<<" is negative"<<endl;
    }
    else{
        cout<<a<<" is zero"<<endl;
    }
}