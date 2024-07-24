#include<iostream>
#include<vector>
using namespace std;
void insertionSort(vector<int>& arr)
{
	for(int i=1;i<arr.size();i++)
	{
		int key= arr[i];
		int j;
		for(j=i-1;j>=0;j--)
		{
			if(arr[j]<=key)
			{
				break;
			}
			arr[j+1]=arr[j];
		}
		arr[j+1]=key;
	}
}
