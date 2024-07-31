#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	//opening a text file for writing , you can use open() to open file.
	//creates a file if not present or opens the file if already exits (like write mode)
	ofstream my_file("first.txt"); //creation of file object
	//check if the file has been opened properly
	//Method 1:
	if(my_file.fail())
	{
		cout<<"Error! opening the file. "<<endl;
		//terminate the main() functionn
		return 1; //tells the comiler that some error occured during the program execution
	}
	/*
	//Method 2:
	if(!my_file.is_open())
	{
		cout<<"Error! opening the file. "<<endl;
		//terminate the main() functionn
		return 1; //tells the comiler that some error occured during the program execution
	}
	//Method 3:
	if(!my_file)
	{
		cout<<"Error! opening the file. "<<endl;
		//terminate the main() functionn
		return 1; //tells the comiler that some error occured during the program execution
	}*/
	cout<<"File open status: "<<my_file.is_open()<<endl;
	
	//writing to the file by using inwsertion operator <<
	my_file<<"Antora bali :4000 "<<endl;
	my_file<<"Akansha: 104"<<endl;
	my_file<<"Chetna: 20"<<endl;
	my_file<<"Sukriti: 21"<<endl;
	
	
	my_file.close(); //to prevent memory leakage or data loss
	cout<<"File open status: "<<my_file.is_open()<<endl;
}