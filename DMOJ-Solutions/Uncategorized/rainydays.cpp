#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MM = 1e8+5;
int main() {
    fast();
    
    unordered_map<ll,ll> mp;

    ll N, M, K; cin >> N >> M >> K;
    ll ans = N*M;
    unordered_set<ll> v;
    for (int i = 0; i < K; ++i) {
        ll x, y; cin >> x >> y;
        if (y > mp[x]) { v.insert(x); mp[x] = y; }
    }
    ans -= M*(N-v.size());
    for (ll x: v) ans -= (M-mp[x]-1);
    if (ans - K == -1) cout << 0 << "\n";
    else cout << ans - K << "\n";
}