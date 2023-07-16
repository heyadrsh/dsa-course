#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    //basic arithmetic operators
    int a=2/5;
    cout<<a<<endl;

    int b=2.0/5;
    cout<<b<<endl;

    float c=2.0/5;
    cout<<c<<endl;

    //relational operators
    int d=2;
    int e=5;

    bool first=(e==d);
    cout<<first<<endl;
    cout<<(d==e)<<endl;

    bool second=(e>=d);
    cout<<second<<endl;

    bool third=(e<=d);
    cout<<third<<endl;
    bool fourth=(e>d);
    cout<<fourth<<endl;

    bool fifth=(e<d);
    cout<<fifth<<endl;

    bool sixth=(e!=d);
    cout<<sixth<<endl;

    //logical operators
    int age=20;
    int weight=60;
    cout<<(age>18 && weight>50)<<endl;
    cout<<(age>18 || weight>50)<<endl;
    cout<<!(age>18)<<endl;
}