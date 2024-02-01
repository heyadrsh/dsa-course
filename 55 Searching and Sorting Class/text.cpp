#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int>v{1,2,3,3,4,4,5,6,7,8};
	int target=3;
	int s=0;
	int e=v.size()-1;
	int m=(s+(e-s)/2);
	int index=-1;
  int lindex=-1;
  int total=0;

	while(s<=e){
		if(v[m]==target){
			index=m;
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

  cout<<"index:"<<index<<endl;

	while(s<=e){
		if(v[m]==target){
			lindex=m;
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
  cout<<"lindex:"<<lindex<<endl;

  total=lindex-index+1;
  cout<<"tndex:"<<total<<endl;

}