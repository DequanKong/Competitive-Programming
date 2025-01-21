#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const ll MOD = 1e9+7;

ll ans = 0; ll k;

void solve(ll a, ll b) {
    ll small = min(a,b), big = max(a,b);
    if (small + k <= big) small += k;
    else {
        k -= (big-small); small = big;
        small += k/2; big += k/2;
        if (k % 2 == 1) big++;
    }
    ans += ((small%MOD)*(big%MOD))%MOD;
}
int main() {
    fast();
    int n;  cin >> n >> k;
    vector<ll> a(n),b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];
    sort(a.begin(),a.end(),greater<ll>());
    sort(b.begin(),b.end(),greater<ll>());
    if (k==0) {
        for (int i = 0; i < n; ++i) ans += ((a[i] % MOD) * (b[i]%MOD))%MOD;
    } else {
        for (int i = 1; i < n; ++i) ans += ((a[i] % MOD) * (b[i]%MOD))%MOD;
        solve(a[0],b[0]);
    }
    cout << ans % MOD << "\n";
}