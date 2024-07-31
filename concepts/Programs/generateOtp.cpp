#include <iostream>
#include <stdlib.h>
#include<string>
using namespace std;
string opt_gen()
{
	//cout<<time(0)<<endl; //current time
	srand(static_cast<unsigned int>(time(0)));
	string otp="";
	while(otp.size()<6){
		char apl=rand()%16+'a';
		otp+=apl;
		string integer=to_string(rand()%11);
		if(integer!="0")
			otp+=integer;
		
	}
	return otp;
}
int main()
{
	cout<<opt_gen()<<endl;
}
java-springboard --hibernet;
Dev tools 
