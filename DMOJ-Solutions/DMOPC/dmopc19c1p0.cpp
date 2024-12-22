#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ll n; cin >> n; ll mn = 1000000000, mx = -1000000000;
    for (ll i = 0; i < n; ++i) {
        ll x;  cin >> x; 
        if (x <= mn) mn = x;
        if (x >= mx) mx = x;
    }
    cout << mx-mn << "\n";
    return 0;
}