#include<iostream>
#include<vector>
#include<map>

using namespace std;


class train
{
	string departureDate;
	string departureTime;
	string totalTime;
	map<string,int> charges;
	
	train(string dd, string dt, string tt,int a, int b, int c):departureDate(dd),departureTime(tt),totalTime(tt)
	{
		charges["3A"]=a;
		charges["2A"]=b;
		charges["1A"]=c;
		
	}
	
}
class destination
{
	string Destname;
	string trianID;
	vector<train>
	public:
		destination(string ID, string name): trainID(ID), Destname(name){};	
	
		
};

