#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int>v{1,2,3,3,4,4,4,4,4,4,5,6,7,8};
	int target=4;
	int s=0;
	int e=v.size()-1;
	int m=(s+(e-s)/2);
	int firstIndex=-1;
  int lastIndex=-1;
  int total=0;

	while(s<=e){
		if(v[m]==target){
			firstIndex=m;
			e=m-1;
		}
		else if(target<v[m]){
			e=m-1;
		}
		else if(target>v[m]){
			s=m+1;
		}
    m=(s+(e-s)/2);
	}

  cout<<"First Index:"<<firstIndex<<endl;

	s=0;
	e=v.size()-1;
	m=(s+(e-s)/2);

	while(s<=e){
		if(v[m]==target){
			lastIndex=m;
			s=m+1;
		}
		else if(target<v[m]){
			e=m-1;
		}
		else if(target>v[m]){
			s=m+1;
		}
    m=(s+(e-s)/2);
	}
  cout<<"Last Index:"<<lastIndex<<endl;

  total=lastIndex-firstIndex+1;
  cout<<"Total Elements:"<<total<<endl;

	return 0;
}