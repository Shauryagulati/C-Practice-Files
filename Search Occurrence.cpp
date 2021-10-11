#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int size, int i, int key){
    if(i == size) return -1; 
    if(arr[i] == key) return i;
    return firstOcc(arr, size, i+1, key);
}

int lastOcc(int arr[], int size, int i, int key){
    int restArray = lastOcc(arr, size, i+1, key);
    if(restArray != -1) return restArray;
    if(arr[i] == key) return i;
}

int main(){
    int arr[] = {4,2,1,2,5,2,7};
    cout<<firstOcc(arr, 7, 0, 2);
    cout<<lastOcc(arr, 7, 0, 2);
    return 0;
}