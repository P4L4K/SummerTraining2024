#include<iostream>
#include<vector>
using namespace std;
void createVector(vector<int>& arr)
{
	cout<<"\nCreating array:\n";
	int n;
	cout<<"Enter array Size: ";
	cin>>n;
	cout<<"Enter array elements: \n";
	for(int i=0;i<n;i++)
	{   int x=0;
		cin>>x;
		arr.push_back(x);
	}
	cout<<endl;
}