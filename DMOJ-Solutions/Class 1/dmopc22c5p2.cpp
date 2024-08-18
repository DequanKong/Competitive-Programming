#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

// Problem URL: https://dmoj.ca/problem/dmopc22c5p2
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    ll x = (1+n)*n/4;
    int counter = 0; int y = 0;// if n = 6, subarrays = 21, x = 10
    for (int i = 0; i < n; i++) {
        ll num = n - i;
        y++;
        if (x >= num) {
            cout << -n << " ";
            x -= num;
        } else {
            cout << -x << " ";
            break;
        }
    }
    for (int i = y; i < n; i++) {
        if (i == n-1) {
            cout << 1 << "\n";
        } else {
            cout << 1 << " ";
        }
    }
    return 0;
}
