#include <bits/stdc++.h>
using namespace std;

int printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void rearrange(int arr[], int size){
    int j=0;
    for(int i=0; i<size; i++){
        if(arr[i]<0){
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
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
    
    rearrange(arr, size);
    printArray(arr, size);
    
    return 0;    
}

