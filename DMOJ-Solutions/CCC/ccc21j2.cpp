#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    map<int,vector<string>,greater<int>> mp;
    int n; cin >> n;
    while (n--) {
        int a; string s; cin >> s >> a;
        mp[a].push_back(s);
    }
    for (const auto& pair: mp) {
        cout << pair.second[0] << "\n"; return 0;
    }
}