#include<bits/stdc++.h>
using namespace std;

int circularArraySearch(int A[], int n, int x){
    int low = 0, high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(x == A[mid]) return mid; //Case 1;
        
        if(A[mid] < A[high]){   //Right Half is Sorted
            if(x > A[mid] && x <= A[high])  //Searching in Right Half
                low = mid + 1;
            else
                high = mid - 1;  //Go searching Left
        }
        else{  //Left Half is Sorted
            if(x >= A[low] && x <= A[mid])  //Searching in Left Half
                high = mid - 1;
            else
                low = mid + 1;   //Go Searching Right
        }
    }
    return -1; 
}

int main(){
    int A[] = {12,14,18,21,3,6,8,9};
    int index = circularArraySearch(A, 8, 21);
    cout<<"The element is present at "<<index+1<<"th position.";
    return 0; 
}