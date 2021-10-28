#include<bits/stdc++.h>
using namespace std;

int findTrailingZeroes(int n){
    if(n<0) return -1;
    
    int count = 0;
    for(int i=5; n/i>=1; i*=5){
        count = count + n/i;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<"No of trailing zeroes in "<<n<<" is "<<findTrailingZeroes(n);
    return 0;
}