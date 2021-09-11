#include<bits/stdc++.h>
using namespace std;

int findRotationCount(int A[], int n){
    int low = 0, high = n-1;
    while(low <= high){
        if(A[low] <= A[high]) return low; //Case 1
        
        int mid = (low + high)/2;
        int next = (mid+1)%n;
        int prev = (mid+n-1)%n;
        
        if(A[mid] <= A[next] && A[mid]<= A[prev]) //Case 2
            return mid;
        else if(A[mid] <= A[high]) high = mid - 1; //Case 3
        else if(A[mid] >= A[low]) low = mid + 1;  //Case 4
    }
    return -1; 
}

int main(){
    int A[] = {1,2,3,4,5,6,7,8,9,10,11};
    int count = findRotationCount(A, 11);
    cout<<"The array is rotated "<<count<<" times.";
    return 0; 
}