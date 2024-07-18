#include<iostream>
#include<list> //doubly linked list
using namespace std;
int main(){
	list<int> l;
	l.push_back(10);
	l.push_back(10);
	l.push_back(11);
	l.push_front(12);
	l.push_front(10);
	for(int i: l)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	l.unique();
	cout<<"unique"<<endl;
	for(int i: l)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	l.reverse();
	cout<<"reverse: "<<endl;
	for(int i: l)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	l.erase(l.begin());
	cout<<"After erase: ";
	for(int i: l)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<"Size if list: "<<l.size()<<endl;
	l.resize(2);
	cout<<"Size if list after resize: "<<l.size()<<endl;
	for(int i: l)
	{
		cout<<i<<" "; 
	}
	cout<<endl;
	
}
