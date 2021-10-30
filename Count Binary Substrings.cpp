#include<bits/stdc++.h>
using namespace std;

int getSubstringCount(string s){
    int arr[2] = { 0 };
    int ans = 0;
    
    for(int i=0; i<s.length(); i++){
        int num = s[i] - '0';
        if(i== 0 || s[i] != s[i-1]){
            arr[num] = 0;
        }
        ++arr[num];
        if(arr[num] <= arr[1-num]){
            ++ans;
        }
    }
    return ans;
}

int main(){
    cout<<getSubstringCount("001100011");
    return 0;
}