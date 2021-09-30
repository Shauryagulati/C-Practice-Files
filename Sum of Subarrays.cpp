#include <bits/stdc++.h>
using namespace std; 

int main(){
    int arr[100];
    int n;
    cout<<"How many elements in the array: ";
    cin>>n;
    
    cout<<"Input the array: ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    int no = (n*(n+1))/2;
    cout<<"The no of Sub-arrays possible are: "<<no<<endl;
    
    cout<<"The sum of Sub-arrays are: ";
    int curr=0;
    for(int i=0; i<n; i++){
        curr = 0;
        for(int j=i; j<n; j++){
            curr += arr[j];
            cout<<curr<<" ";
        }
    }
}