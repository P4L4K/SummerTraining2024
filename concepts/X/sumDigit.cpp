#include<iostream>
using namespace std;
int rsum(int n)
{
	if (n==0)
	{
		return 0;
	}
	int d=n%10;
	n=n/10;
	return d + rsum(n);
}
int main()
{
	cout<<"sum: "<<rsum(45)<<endl;
}
