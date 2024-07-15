#include<iostream>
using namespace std;

void Bubble_sort_pass(int arr[],int n){
  
  for(int j=0;j<n-1;j++){
    for (int i=0;i<n-j-1;i++){
        //cout<<i;
        if (arr[i]>arr[i+1]){
           //swap
           swap(arr[i],arr[i+1]);
          
        }
    }
    
  }
  cout<<"Sorted Array:\n";
  for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
   
 
}

int main(){
    int arr[]={2,4,54,1,3};
    int n=sizeof(arr)/sizeof(int);
    Bubble_sort_pass(arr,n);

    
}
