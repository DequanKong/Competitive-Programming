#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    string t,s; cin >> t >> s;
    vector<string> all(s.size());
    for (int i = 0; i < s.size(); ++i) {
        if (i == 0) all[i] = s;
        else {
            all[i] = all[i-1].substr(1) + all[i-1][0];
        }
    }
    for (int i = 0; i < t.size() - s.size()+1; ++i) {
        for (string x: all) {
            if (t.substr(i,s.size()) == x) { cout << "yes\n"; return 0;}
        }
    }
    cout << "no\n";
}