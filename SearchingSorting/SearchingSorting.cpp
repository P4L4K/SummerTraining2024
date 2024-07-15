//sort and search in an array
#include<iostream>
using namespace std;

void sorting(int* arr,int n){
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

int bin_searchig(int* arr,int n,int element){
    
    int l=0;
    int u=n-1;
    int mid=0;
    while(l<=u){
        mid=(l+u)/2;
         if (arr[mid]==element){
            return mid;
         }
         else if(arr[mid]>element){
            u=mid-1;
         }
         else{
            l=mid+1;
         }
    }
    return -1;
}

int main(){
    int arr[]={44,5,67,12,89,45};
    int length= sizeof(arr)/sizeof(arr[0]);
    sorting(arr,length);
    cout<<"sorted array: \n";
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nElement found at index : "<<bin_searchig(arr,length,89);
}