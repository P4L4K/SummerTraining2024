#include<iostream>
using namespace std;

void selection_sort(int n){
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    cout<<"Sorted Array:"<<endl;
    for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    selection_sort(n);
}