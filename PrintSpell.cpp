#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

void printSpell (int n, string str){
    if (n == 0){
        return;
    }
    printSpell(n/10, str);
    cout<<str[n%10]<<" ";
}

int main(){
    int n;
    string str[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    
    cout<<"Enter Input: ";
    cin>>n;
    
    cout<<"Answer is: ";
    printSpell(n,str);
    
    return 0;
}

