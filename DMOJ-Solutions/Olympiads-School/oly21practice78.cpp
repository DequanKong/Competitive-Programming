#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, h[105], ans = INT_MAX;
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> h[i];
    for (int i = -100; i <= 100; ++i) {
        int total = 0;
        for (int j = 1; j <= n; ++j) {
            total += (h[j]-i)*(h[j]-i);
        }
        ans = min(ans,total);
    }
    cout << ans << "\n";
}