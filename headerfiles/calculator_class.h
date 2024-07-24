#include<iostream>
using namespace std;
class calculator
{

	public:
	void wlcm(); //DECLARATION
	int add(int num1,int num2)
	{
		return num1+num2;
	}
	int sub(int num1,int num2)
	{
		return num1-num2;
	}
	int multiply(int num1,int num2)
	{
		return num1*num2;
	}
	int divide(int num1,int num2)
	{
		if (num2==0)
		{
			return -1;
		}
		return num1/num2;
	}
	int remainder(int num1,int num2)
	{
		return num1%num2;
	}
};