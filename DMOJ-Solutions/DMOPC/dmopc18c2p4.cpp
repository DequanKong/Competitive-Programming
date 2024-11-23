#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    
    ll n, m; cin >> n >> m;
    vector<ll> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    int left = 0, right = 0; ll res = 0;
    int len = INT_MAX;
    while (right < n) {
        res += v[right]; right++;
        while (res >= m) {
            len = min(len,right-left);
            res -= v[left];
            left++;
        }
    }
    if (len == INT_MAX) cout << "-1\n";
    else cout << len << "\n";
}