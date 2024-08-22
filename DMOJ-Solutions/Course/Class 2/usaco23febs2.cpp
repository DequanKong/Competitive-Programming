#include <bits/stdc++.h>
using namespace std;
// Problem URL: https://dmoj.ca/problem/usaco23febs2
typedef long long ll;
int G, N, ans; vector<array<int, 3>> g;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> G >> N;
    for(int i=0, x, y, t; i<G; i++) {
        cin >> x >> y >> t;
        g.push_back({t, x, y});
    }
    sort(g.begin(), g.end());
    for(int i=0, x, y, t; i<N; i++) {
        cin >> x >> y >> t;
        array<int, 3> tmp = {t, x, y}; bool f = 1;
        int p = lower_bound(g.begin(), g.end(), tmp) - g.begin();
        if(p != g.size()) {
            ll dt=t - g[p][0], dx = x - g[p][1], dy = y - g[p][2];
            if(dt*dt < dx*dx + dy*dy) f = 0;
        }
        if(p != 0) {
            ll dt=t - g[p-1][0], dx = x - g[p-1][1], dy = y - g[p-1][2];
            if(dt*dt < dx*dx + dy*dy) f = 0;
        }
        ans += !f;
    }
    cout << ans << endl;
}
