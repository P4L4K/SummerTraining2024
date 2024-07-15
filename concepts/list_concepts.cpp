#include<iostream>
#include<list>
using namespace std;
int main(){
	list<int> l;
	l.push_back(10);
	l.push_front(12);
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
}
