#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	ifstream my_file("first.txt"); 
	if(!my_file)
	{
		cout<<"Error! Unable to open the file."<<endl;
		return 1;
	}
	//store the contents of the file in "line" string
	string line;
	int word_c=0;
	while(!my_file.eof())
	{    //use eof() to check the end of data
		//store the current lin of the file in the "line" variable
		string word="";
		getline(my_file,line);
		for(auto i: line){
			if(i==' ')
			{
				word_c++;
				cout<<word<<endl;
				word="";
			}
			else
			{
				word+=i;
			}
			
		}

	}
	cout<<"count: "<<word_c<<endl;
	my_file.close(); //to prevent memory leakage or data loss
	cout<<"\nFile open status: "<<my_file.is_open()<<endl;
	return 0;
}