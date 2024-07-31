/*
account_numbers[i]=xxxyy
	xxx=branch code
	yy=acc
to find the total no of acc in the given branch
*/

#include<iostream>
using namespace std;
int registerAccountNumbers(int size,int account_numbers[],int branch_code)
{
	int ans=0;
	if(size<0)
	{
		cout<<"Invalid Array Size!"<<endl;
		return -1;
	}
	if(branch_code<0)
	{
		cout<<"Invalid branch code!"<<endl;
		return -1;
	}
	for(int i=0;i<size;i++)
	{ 
		if(account_numbers[i]<0)
		{
			cout<<"Invalid Account Number!"<<endl;
			return -1;
		}
		int branch=account_numbers[i]/100;
		int acno=account_numbers[i]%100;
		cout<<acno<<" "<<branch<<endl;
		if(branch==branch_code)
		{
			ans++;
		}
	}
	return ans;
}
int main()
{
	//taking input
	int n=0; //size of acc nos.
	cin>>n;
	int account_numbers[n];
	for(int i=0;i<n;i++)
	{
		cin>>account_numbers[i];
	}
	cout<<registerAccountNumbers(n,account_numbers,133)<<endl;
}