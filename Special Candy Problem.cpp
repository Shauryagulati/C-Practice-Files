#include<bits/stdc++.h>
using namespace std;

int specialCandey(int input1, int input2, int input3[]){
    sort(input3, input3+input1);
    return input3[input1- input2];
}

int main(){
    int input1, input2;
    int input3[100];
    
    cin>>input1>>input2;
    for(int i=0; i<input1; i++){
        cin>>input3[i];
    }
    
    cout<<specialCandey(input1, input2, input3);
}