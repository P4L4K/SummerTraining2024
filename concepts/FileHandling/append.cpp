#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	//creates a file if not present or opens the file if already exits (like append mode)
	ofstream my_file("D:\\Summar Training 2024\\concepts\\FileHandling\\first.txt",ios::app); // to append data
	//check if the file has been opened properly
	if(my_file.fail())
	{
		cout<<"Error! opening the file. "<<endl;
		//terminate the main() functionn
		return 1; //tells the comiler that some error occured during the program execution
	}

	cout<<"File open status: "<<my_file.is_open()<<endl;
	
	//writing to the file by using inwsertion operator <<
	my_file<<"Bhoomi :40 "<<endl;
	my_file<<"Preetika: 104"<<endl;
	
	my_file.close(); //to prevent memory leakage or data loss
	cout<<"File open status: "<<my_file.is_open()<<endl;
}