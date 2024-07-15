#include<iostream>
using namespace std;
int binSearch(int * arr, int val, int arrlength){
    int l=0;
    int u=arrlength-1;
    while(l<=u){
        int mid= (l+u)/2;
        if(arr[mid]==val){
            return mid;
        }
        else if(arr[mid]>val){
            u=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
}
int main(){
    int arrlength;
    cout<<"Enter array length: ";
    cin>>arrlength;
   //input sorted array
   int arr[arrlength];
   cout<<"Enter sorted array: \n";
   for(int i=0;i<arrlength;i++){
      cin>>arr[i];
   }

   //element to search
   int val;
   cout<<"Enter the value to search: ";
   cin>>val;

   //searching 
   int pos=binSearch(arr,val,arrlength);
   if (pos==-1){
    cout<<"Element not found";
   }
   else{
    cout<<"Element found at index: "<<pos<<endl;
   }
}