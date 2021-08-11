#include<bits/stdc++.h>
using namespace std;

int printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[10];
    int size;
    
    cout<<"How many elements do you want to have: ";
    cin>>size;
    
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    printArray(arr, size);

    int min=arr[0];
    int max=arr[0];
    
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    
    cout<<"Min is: "<<min<<endl<<"Max is: "<<max;
    return 0;
}