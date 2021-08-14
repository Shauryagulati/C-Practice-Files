#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;

void reverse(string str){
    for(int i=str.length()-1; i>=0; i--){
        cout<<str[i];
    }    
}

int main()
{
    string str = "Shaurya Gulati";
    reverse(str);
    return 0;
}
