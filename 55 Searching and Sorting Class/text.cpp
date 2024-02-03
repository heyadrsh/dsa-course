#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int>v{1,2,3,4,5,7,8};

  int start=0;
	cout<<"iStart: "<<start<<endl;
  int end=v.size()-1;
	cout<<"iend: "<<end<<endl;
  int mid=(start+end)/2;
	cout<<"imid: "<<mid<<endl;

  while(start<end){
    if(v[mid]==v[start]+mid){
      start=mid+1;
			cout<<"start: "<<start<<endl;
			cout<<"mid: "<<mid<<endl;
			cout<<"end: "<<end<<endl;
			cout<<"---"<<endl;
    }
    else{
      end=mid-1;
			cout<<"start: "<<start<<endl;
			cout<<"mid: "<<mid<<endl;
			cout<<"end: "<<end<<endl;
			cout<<"---"<<endl;
    }
    mid=start+(end-start)/2;
			cout<<"start: "<<start<<endl;
			cout<<"mid: "<<mid<<endl;
			cout<<"end: "<<end<<endl;
			cout<<"---"<<endl;
  }
	cout<<"Missing Element: "<<mid+2<<endl;
}