#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int exponent (int n, int p){
    if (p == 0){
        return 1;
    }
    int answer = n * exponent(n, p-1);
    return answer;
}

int main(){
    int n,p;

    cout<<"Enter Input for No: ";
    cin>>n;
    cout<<"Enter input for Power: ";
    cin>>p;
    
    cout<<"Answer is: "<<exponent(n, p);
    
    return 0;
}

