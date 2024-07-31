#include<iostream>
#include<fstream>
#include<cctype>
#include<string>
#include<cstdlib>
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
	//loop until the end of the text file
	int sum=0;
	int total=0;
	while(!my_file.eof())
	{    //use eof() to check the end of data
		//store the current lin of the file in the "line" variable
		getline(my_file,line);
		string n1="";
		for(auto i: line){
			if(isdigit(i))
			{
				n1+=i;
			}
		}

		if(!n1.empty()){
			int n2=std::stoi(n1);
			sum+=n2;
			total++;
		}

	}
	cout<<"sum: "<<sum<<endl;
	cout<<"Average: "<<(sum+0.0)/total<<endl;
	
	
	my_file.close(); //to prevent memory leakage or data loss
	cout<<"File open status: "<<my_file.is_open()<<endl;
	return 0;
}