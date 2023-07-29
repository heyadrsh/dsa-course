#include<iostream>
using namespace std;

int main(){
    int rowCount;
    cout<<"Enter row/s number: ";
    cin>>rowCount;

    for(int row=0; row<rowCount; row+=1){
        for(int space=0; space<(rowCount-(row+1)); space+=1 ){
            cout<<" ";
        }
        for(int star=0; star<(row+1); star+=1){
            cout<<"* ";
        }
        cout<<endl;
    }
}