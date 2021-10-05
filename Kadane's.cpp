#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[100];
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++)
        cin>>arr[n];
        
    int currSum = 0;
    int maxSum = 1;

    for(int i=0; i<n; i++){
        currSum += arr[i];
        if(currSum < 0){
            currSum = 0;
        }
        
        maxSum = max(maxSum, currSum);
    }
    
    cout<<maxSum;
}