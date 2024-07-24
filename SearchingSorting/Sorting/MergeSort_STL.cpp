#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> arr={123,53,23,123,-1};
	stable_sort(arr.begin(),arr.end()); //performs merge sort
	for(int num: arr)
	{
		cout<<num<<" ";
	}
}