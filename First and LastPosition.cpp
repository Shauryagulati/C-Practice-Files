#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void findFirstandLast(int arr[], int n, int no){
    int first=-1, last=-1;
    for(int i=0; i<n; i++){
        if (first == -1)
            first = i;
        last = i;
    }
    if(first != -1){
        cout<<first+1<<", "<<last+1;
    }else {
        cout<<"Not Found";
    }
}

int main(){
    int arr[10];
    int n,no;
    
    cout<<"How many numbers you want in the array: ";
    cin>>n;
    cout<<"Enter the Array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the Number to find positions of: ";
    cin>>no;
    
    findFirstandLast(arr, n, no);
    return 0;
}