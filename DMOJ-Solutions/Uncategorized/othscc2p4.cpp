#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
const int MM = 1e6;
int main() {
    boost();
    int N, M, Q; cin >> N >> M >> Q;
    unordered_map <ll, pair<int,int>> mp;
    mp.reserve(MM);
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= M; ++j) { ll x; cin >> x; mp[x] = {i,j}; }
    }
    while (Q--) {
        ll c; int x1, y1, x2, y2; cin >> c >> x1 >> y1 >> x2 >> y2;
        int x = mp[c].first, y = mp[c].second;
        if (x == 0 and y == 0) {cout << "no" << endl; continue; }
        if (x1 <= x and y1 <= y and x2 >= x and y2 >= y) {
            cout << "yes" << endl;
        } else { cout << "no" << endl;}
    }
}