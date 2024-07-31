#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string delName;
	cout<<"Enter the name whose to be deleted: ";
	cin>>delName;
	ifstream my_file("first.txt");
	string line,data="";
	//loop until the end of the text file
	while(!my_file.eof())
	{   
		getline(my_file,line);
		string name="";
		for(auto i: line)
		{
			if(i==' ')
			{
				break;
			}
			name+=i;
		}
		if(name!=delName)
		{
			data+=line+"\n";
		}
		else
		{
			delName="";
		}
	}
	my_file.close();
	ofstream update_file("first.txt");
	update_file<<data;
}