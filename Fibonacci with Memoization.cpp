#include<bits/stdc++.h>
using namespace std;
int arr[51];

int fib(int n){
    if(n==1) return n;
    
    if(arr[n] != -1) return arr[n];
    
    arr[n] = fib(n-1) + fib(n-2);
    return arr[n];
}

int main(){
    for(int i=0; i<51; i++)
        arr[i] = -1;
    
    int n; 
    cin>>n;
    cout<<fib(n);
}