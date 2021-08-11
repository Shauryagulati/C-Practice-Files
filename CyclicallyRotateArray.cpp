#include <bits/stdc++.h>
using namespace std;

int printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void rotate(int arr[], int size){
  int x = arr[size-1];
  for (int i = size - 1; i > 0; i--)
    arr[i] = arr[i - 1];
  arr[0] = x;
}

int main(){
    int arr[10];
    int size;
    
    cout<<"How many elements do you wish to enter: ";
    cin>>size;
    
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    printArray(arr, size);
    
    rotate(arr, size);
    printArray(arr, size);
    
    return 0;    
}

