#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

// Problem URL: https://dmoj.ca/problem/aplusb
int main() {
    ll N; cin >> N;
    for (int i = 0; i < N; ++i) {
        ll a, b; cin >> a >> b;
        cout << a + b << "\n";
    }
    return 0;
}
