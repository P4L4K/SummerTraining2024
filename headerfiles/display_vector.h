#include<iostream>
#include<vector>
using namespace std;
void displayVector(vector<int> & arr)
{
	for (int num : arr)
	{
		cout<<num<<" ";
	}
	cout<<endl;
}