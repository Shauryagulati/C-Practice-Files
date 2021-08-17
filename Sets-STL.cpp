#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    set<int>s;
    int type, query;
    
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>type>>query;
    
        switch(type){
            case 1: s.insert(query); break;
            case 2: s.erase(query); break;
            case 3: cout<< (s.find(query) == s.end() ? "No" : "Yes")<< endl; break;
        }
    }
    return 0;
}


