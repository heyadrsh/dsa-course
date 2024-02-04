#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int>v{22,23,24,25,26,28,29,30};

  int start=0;
	cout<<"iStart: "<<start<<endl;
  int end=v.size()-1;
	cout<<"iend: "<<end<<endl;
  int mid=(start+end)/2;
	cout<<"imid: "<<mid<<endl;
	cout<<"---"<<endl;

  while(start<=end){
    if(v[mid]==v[0]+mid){
      start=mid+1;
    }
    else{
      end=mid-1;
    }
    mid=(end+start)/2;
  }
	cout<<"Missing Element: "<<v[mid+1]-1<<endl;
}