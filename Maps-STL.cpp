#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, type; 
    cin>>n;
    map<string, int> m;
    string name;
    
    for (int i(0), mark; i<n; ++i)
    {
        cin >> type >> name;
        if ( type == 1){
            cin >> mark;
            m[name] += mark;
        }
        else if (type == 2)
            m.erase(name);
        else
            cout << m[name] << "\n";
    }
    return 0;
}

