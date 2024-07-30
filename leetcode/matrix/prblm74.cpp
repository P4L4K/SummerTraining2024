//https://leetcode.com/problems/search-a-2d-matrix/description/
#include<iostream>
#include<vector>
using namespace std;
bool binsearch(vector<int> v,int target){
	int l=0,u=v.size()-1;
	while(l<=u){
		int mid=(l+u)/2;
		if(v[mid]==target){
			return true;
		}
		else if(v[mid]>target){
			u=mid-1;
		}
		else{
			l=mid+1;
		}
	}
	return false;
}
bool searchMatrix(vector<vector<int>> matrix, int target) {
	for(auto i: matrix){
		if(binsearch(i,target)){
			return true;
		}
	}
	return false;
}

int main()
{
	cout<<"Result: "<<searchMatrix({{1,3,5,7},{10,11,16,20},{23,30,34,60}},3)<<endl;
	cout<<"Result: "<<searchMatrix({{1,3,5,7},{10,11,16,20},{23,30,34,60}},44)<<endl;
}