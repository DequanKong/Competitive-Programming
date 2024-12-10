#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    string s; cin >> s; int ans = INT_MIN;
    vector<string> v;
    for (int i = 0; i < s.size(); ++i) {
        for (int j = 1; j <= s.size(); ++j) {
            v.push_back(s.substr(i,j));
        }
    }
    for (string k: v) {
        bool check = true;
        for (int i = 0; i < k.size()/2; ++i) {
            if (k[i] != k[k.size()-i-1]) { check = false; break;}
        }
        if (check and (int) k.size() > ans) ans = k.size();
    }
    cout << ans << "\n";
    
}