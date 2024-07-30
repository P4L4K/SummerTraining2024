//https://leetcode.com/problems/jewels-and-stones/description/
#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int numJewelsInStones(string jewels, string stones) {
	unordered_map<char,char> visited;
	for(auto i: stones){
			visited[i]++;
	}
	int res=0;
	for(auto  j: jewels){
		res+=visited[j];
	}
	return res;
}
int main()
{
	cout<<"Result: "<<numJewelsInStones("aA","aAAbbbb")<<endl;
}
