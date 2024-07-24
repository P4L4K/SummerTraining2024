#include<iostream>
#include<vector>
using namespace std;

void Bubble_sort_pass(vector<int> & arr){
	int n=arr.size();
	for(int j=0;j<n-1;j++){
		for (int i=0;i<n-j-1;i++){
				//cout<<i;
				if (arr[i]>arr[i+1]){
					 //swap
					 swap(arr[i],arr[i+1]);
					
				}
		}
		
	}
	
}


