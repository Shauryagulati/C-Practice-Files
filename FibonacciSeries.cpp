#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getFibonacci(int n){
    if(n==0 || n==1){
        return n;
    }
    else {
        return (getFibonacci(n-1) + getFibonacci(n-2));
    }
}

int main(){
    int n;
    cout<<"Enter Input: ";
    cin>>n;
    cout<<"Value of "<<n<<"th Fibonacci is: "<<getFibonacci(n);
    return 0;
}
