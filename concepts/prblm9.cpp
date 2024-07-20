#include<iostream>
#include<vector>
using namespace std;
int max_subarray0(vector<int>& nums)
{
	int max_0_count=nums[0];
	int current_0_count=0;
	for(int i: nums)
	{
		if(i==1)
		{
			current_0_count=0;
		}
		else
		{
			current_0_count+=1;
		}
		max_0_count=max(max_0_count,current_0_count);
	
	}
	return max_0_count;
}
int max_subarrayn(vector<int>& nums,int n)
{
	int max_1_count=nums[0];
	int current_1_count=0;
	bool zero_flag=true;
	for(int i: nums)
	{
		if(i!=n)
		{
			current_1_count=0;
		}
		else
		{
			current_1_count+=1;
		}
		max_1_count=max(max_1_count,current_1_count);
	
	}
	return max_1_count;
}


int main()
{
	vector<int> nums={1,1,1,5,5,5,5,5,5,1,0,1,1,5,5,5,0,0,0};
	cout<<"max consecutive 5s: "<<max_subarrayn(nums,5)<<endl;
	//cout<<"max consecutive 0s: "<<max_subarray0(nums)<<endl;
	//cout<<"max consecutive count: "<<max(max_subarray1(arr),max_subarray0(arr))<<endl;
	
	 int count=0,max=0;

 int s=0,e=0,n=nums.size();

 while(s<n && e<n){

  if(nums[s]==5){

   e=e+1;

   while(e<n && nums[e]==5){

    e++;

   }

  }

  count=e-s;

  if(count>max){

   max=count;

  }

  s=e+1;

  e=e+1;

 }

  cout<<max;
}