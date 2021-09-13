#include<bits/stdc++.h>
using namespace std;

int selectionSort(int A[], int n){
    for(int i=0; i < n-1; i++){
        int iMin = i;
        for(int j=i+1; j<n; j++){
            if(A[j] < A[iMin]){
                iMin = j;
            }
        }
        int temp = A[i];
        A[i] = A[iMin];
        A[iMin] = temp;
    }    
}

int main(){
    int A[] = {2,7,4,1,5,3};
    selectionSort(A,6);
    for(int i=0; i<6; i++){
        cout<<A[i]<<" ";
    }
    return 0;
}