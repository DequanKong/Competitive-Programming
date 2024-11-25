#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();

    string s1,s2; cin >> s1 >> s2;
    unordered_map<char,int> mp, mp2;
    for (char c: s1) mp[c]++;
    int diff = 0;
    for (char c: s2) {
        mp2[c]++;
        if (c == '*') diff++;
    }
    
    for (auto [a,b]: mp) {
        if (b < mp2[a]) { cout << "N\n"; return 0; }
        else {
            diff -= (b-mp2[a]);
        }
    }
    if (diff != 0) { cout << "N\n"; return 0; }
    cout << "A\n";
}