#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x){
    
    while(l<=r){
        int mid = (l+(r-1))/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(x<arr[mid]){
            binarySearch(arr, l, mid-1, x);
        }
        else{
            binarySearch(arr, mid+1, r, x);
        }
    }
    return -1;
}

int main(){
    int n,x;
    int arr[10];
    
    cout<<"How many numbers in a array: ";
    cin>>n;
    
    cout<<"Enter Array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    cout<<"Which no to search for: ";
    cin>>x;
    
    int result = binarySearch(arr, 0, n-1, x);
    
    if(result==-1){
        cout<<"Element is not present in the array";
    }
    else{
        cout<<"Element is on index "<<result;
    }
    return 0; 
}