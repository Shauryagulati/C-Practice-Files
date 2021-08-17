#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    map<int, int> mp;
    mp.insert({ 2, 30 });
    mp.insert({ 1, 40 });
 
    auto it = mp.find(2);
 
    mp.insert(it, { 3, 60 });
 

    cout << "KEY\tELEMENT\n";
    for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
        cout << itr->first
            << '\t' << itr->second << '\n';
    }
    return 0;
}