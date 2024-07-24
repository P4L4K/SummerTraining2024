#include<iostream>
#include "InsertSort.cpp"
#include "BubbleSort.cpp"
#include "SelectionSort.cpp"
#include "D:\Summar Training 2024\headerfiles\display_vector.h"
#include "D:\Summar Training 2024\headerfiles\create_vector.h"
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	string c="y";
	do{
		cout<<"\n~~~~~~ Menu ~~~~~~";
		cout<<"\n1.Bubble sort \n2.Insertion Sort \n3.Selection Sort \n4.Merge Sort \n5.END\n";
		cout<<"Enter choice: ";
		int choice=0;
		cin>>choice;
		if (choice == 5)
		{
			break;
		}
		if (choice <5){
			//creating vector
			vector<int> arr;
			createVector(arr);
			switch(choice)
			{
				case 1:
					cout<<"Bubble sort ";
					Bubble_sort_pass(arr);
					break;
				case 2: 
					cout<<"Insertion sort ";
					insertionSort(arr);
					break;
				case 3:
					cout<<"Selection sort ";
					selection_sort(arr);
					break;
				case 4:
					cout<<"Merge sort ";
					stable_sort(arr.begin(),arr.end());
					break;
				case 5:
					break;
			}
			cout<<"Sorted Array:\n";
			displayVector(arr);
		}
		else
		{
			cout<<"Invalid Choice!"<<endl;
		}
		cout<<"\nDo you wish to perform another sort(y/n): ";
		cin>>c;
	}while(c=="y" || c=="Y");
}