#include<iostream>
#include<list>
using namespace std;
void displayList(list<int> l)
{
	cout<<"Displaying list: \n";
	for(auto i: l)
	{
		cout<<i<<" ";
	}
	cout<<endl;
}