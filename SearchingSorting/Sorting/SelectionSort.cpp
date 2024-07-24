#include<iostream>
using namespace std;

void selection_sort(vector<int> & arr){
    int n=arr.size();
    for (int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}
