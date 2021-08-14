#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;

void isPallindrome(string str){
    int flag = 0;
    for(int i=0; i<str.length()-1; i++){
        if(str[i] != str[str.length()-i-1]){
            flag++;
        }
    }
    if(flag == 0){
        cout<<"Is a Pallindrome";
    }else {
        cout<<"Not a Pallindrome";
    }
}

int main()
{
    string str = "Abba";
    isPallindrome(str);
    return 0;
}
