#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int Q, op; string s; unordered_map <string, int> mp;
int main() {
    for (cin >> Q; Q--;) {
        cin >> op >> s;
        if (op == 1) {
            unordered_set<string> st;
            for (int i = 0; i < s.size(); i++) {
                for (int j = 1; i + j <= s.size(); j++) {
                    st.insert(s.substr(i,j));
                }
            }
            for (auto x: st) mp[x]++;
        
        } else {
            cout << mp[s] << "\n";
        }
    }
    return 0;
}
