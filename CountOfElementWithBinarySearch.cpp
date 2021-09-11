#include<bits/stdc++.h>
using namespace std; 

int findCount(int arr[], int n, int x, bool searchFirst){
    int low = 0, high = n-1, result = -1; 
    while(low<=high){
        int mid = (low + high)/2;
        if(arr[mid]==x){
            result = mid;
            if(searchFirst){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        else if(x < arr[mid]) high = mid - 1;
        else low = mid + 1;
    }
    return result;
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
    
    int firstIndex = findCount(arr, n, x, true);
    int lastIndex = findCount(arr, n, x, false);
    
    cout<<"The element in the array is : "<<(lastIndex - firstIndex + 1)<<" times";
}