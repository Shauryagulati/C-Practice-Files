#include<bits/stdc++.h>
using namespace std; 

int findCount(int arr[], int n, int x){
    int c=0;
    for(int i=0; i<n; ++i){
        if(arr[i] == x){
            c++;
        }   
    }
    return c;
}

int main(){
    int x, n;
    int arr[10];
    
    cout<<"How many integers in array: ";
    cin>>n;
    
    cout<<"Enter the array: ";
    for(int i=0; i<n; ++i)
        cin>>arr[i];
        
    cout<<"Which element to search the count for: ";
    cin>>x;
    
    int result = findCount(arr, n, x);
    cout<<"The element in the array is : "<<result<<" times";
}