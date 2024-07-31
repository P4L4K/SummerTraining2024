#include<iostream>
#include<fstream>
#include<cctype>
#include<string>
#include<cstdlib>
using namespace std;
int main()
{
	//reading the file 
	//reading from text files is done by opening the file using the ifstream class.
	ifstream my_file("first.txt"); //can't create a new file
	if(!my_file)
	{
		cout<<"Error! Unable to open the file."<<endl;
		return 1;
	}
	//store the contents of the file in "line" string
	string line;
	//loop until the end of the text file
	while(!my_file.eof())
	{    //use eof() to check the end of data
		//store the current lin of the file in the "line" variable
		getline(my_file,line);

		//print the line variable
		cout<<line<<endl;
	}
	my_file.close(); //to prevent memory leakage or data loss
	cout<<"File open status: "<<my_file.is_open()<<endl;
	return 0;
}