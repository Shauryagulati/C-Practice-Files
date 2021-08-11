#include<bits/stdc++.h>
using namespace std;

int reversedArray(int arr[], int start, int end){
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }
}

void printArray(int arr[], int size){
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    int arr[10];
    int size;
    cout<<"How many no of elements do you want to enter: ";
    cin>>size;
    
    for (int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    printArray(arr, size);
    
    reversedArray(arr, 0, size-1);
    
    printArray(arr, size);
    
    return 0;
}