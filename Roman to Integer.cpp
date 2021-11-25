#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<char, int> mp;
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;
    
    string str = "XIX";
    int result = 0;
    int len = str.length();
    
    for(int i=0; i<len; i++){
        if(mp[str[i]] >= mp[str[i+1]]){
            result +=  mp[str[i]];
        }
        else{
            result -= mp[str[i]];
        }
    }
    cout<<result;
}
