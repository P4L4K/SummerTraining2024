#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> arr={54,7,9,56,7};
	//sort(arr.begin(),arr.end(),greater<int>());
	sort(arr.begin(),arr.end(),[](int a,int b){return b<a;});
	for( int i: arr)
	{
		cout<<i<<" ";
	}
}