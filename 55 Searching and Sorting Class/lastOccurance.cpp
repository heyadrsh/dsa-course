#include<iostream>
#include<vector>

using namespace std;

int firstOccurance(vector<int>v, int target){
	int s=0;
	int e=v.size()-1;
	int m=(s+(e-s)/2);
	int index=-1; 

	while(s<=e){
		if(v[m]==target){
			index=m;
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
	return index;
}

int main(){
	vector<int>v{1,2,3,3,4,4,5,6,7,8};
	int target=4;
	int index=firstOccurance(v,target);

	cout<<"The very last occurance of "<<target<<" is at index "<<index<<"."<<endl;
	return 0;
}
