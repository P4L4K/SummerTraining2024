#include<iostream>
#include<fstream>
using namespace std;
string userName()
{
	string name;
	cout<<"Enter your Name: ";
	getline(cin,name);
	return name;
}
string password()
{
	string pass;
	cout<<"Enter your Password: ";
	getline(cin,pass);
	return pass;
}
int main()
{
	ofstream user_file("CustomerCredentials.text",ios::app);
	user_file<<userName()<<" "<<password();
}