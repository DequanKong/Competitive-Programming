#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    int n, k; cin >> n >> k;
    vector<ll> diff(n);
    ll total = 0;
    for (int i = 0; i < n; ++i) {
        ll x,y; cin >> x >> y;
        total += x;
        diff[i] = x-y;
    }
    sort(diff.begin(),diff.end(),greater<ll>());
    for (int i = 0; i < k; ++i) total -= diff[i];
    cout << total << "\n";
}