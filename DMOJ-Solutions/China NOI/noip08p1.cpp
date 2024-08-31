#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n';

int main() {
    boost();
    string s;
    getline(cin, s);
    unordered_map<char,int> mp; int mx = INT_MIN, mn = INT_MAX;
    for (char c: s) {
        mp[c]++;
        
    }
    for (const auto&[x,y] : mp) {
        mx = max(mx,y); mn = min(mn,y);
    }
    int ans = mx-mn;
    if (ans % 2 == 0) {
        if (ans == 2) { cout << "Lucky Word\n2\n";}
        else {cout << "No Answer\n" << 0 << endl;}
    } else {
        if (ans == 1) { cout << "No Answer\n0\n"; return 0;}
        for (int i = 3; i*i <= ans; i+=2) {
            if (ans % i == 0) {
                cout << "No Answer\n" << 0 << endl; return 0;
            }
        }
        cout << "Lucky Word\n" << ans << endl;
    }
    
}