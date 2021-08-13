#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getCountingTail(int n){
    if(n==0)
    return 0;
    
    cout<<n<<" ";
    getCountingTail(n-1);
}

void getCountingHead(int n){
    if (n>0){
        getCountingHead(n-1);
        cout<<n<<" ";
    }
}

int main(){
    int n;
    cout<<"Counting from which No: ";
    cin>>n;
    getCountingHead(n);
    cout<<endl;
    getCountingTail(n);
    return 0;
}