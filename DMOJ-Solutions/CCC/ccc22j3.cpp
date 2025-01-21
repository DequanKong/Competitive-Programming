#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    unordered_map<char,string> mp; mp['+'] = "tighten"; mp['-'] = "loosen";
    for (int i = 0; i < 26; ++i) {
        mp['A'+i] = "a";
    }
    string s; getline(cin,s);   
    for (int i = 0; i < s.size(); ++i) {
        char c = s[i];
        if (mp[c] != "") {
            if (mp[c].size() != 1) cout << " " << mp[c];
            else {
                
                cout << c;
            }
        } else {
            if (mp[s[i-1]].size() > 1) cout << " " << c;
            else cout << c;
            if (i != s.size() - 1 and mp[s[i+1]] != "") cout << "\n";
        }
    }
}