#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int cnt[6];

int main() {
    fast();
    int n; cin >> n;
    while (n--) {
        for (int i = 1; i <= 5; ++i) {
            char c; cin >> c;
            if (c == 'Y') cnt[i]++;
        }
    }
    int ans = 0;
    for (int i = 1; i <= 5; ++i) {
        ans = max(ans,cnt[i]);
    }
    vector<int> v;
    for (int i = 1; i <= 5; ++i) {
        if (cnt[i] == ans) v.push_back(i);
    }
    if (v.size() == 1) cout << v[0] << "\n";
    else {
        for (int i = 0; i < v.size(); ++i) {
            if (i == v.size()-1) cout << v[i] << "\n";
            else cout << v[i] << ",";
        }
    }
}