#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(ll x) {
    if (x%2 == 0) cout << x/2 << " " << x/2 << "\n";
    else cout << x/2+1 << " " << x/2 << "\n";
}
int main() {
    fast();
    ll n,m; cin >> n >> m; ll all = n*m;
    if (n == 1 and m == 1) cout << "1 0\n";
    else if (n == 1) {
        solve(m);
    } else if (m == 1) {
        solve(n);
    } else {
        if (all%2 == 0) cout << all/2 << " " << all - all/2 << "\n";
        else {
            cout << (n*m-min(n,m))/2+min(n,m) << " " << (n*m-min(n,m))/2 << "\n";
        }
    }
}