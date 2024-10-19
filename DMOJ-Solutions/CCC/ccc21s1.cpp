#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    boost();
    int N; cin >> N;
     double ans = 0;
    vector<ll> height(N+1), base(N);
    for (int i = 0;  i<= N; ++i) {
        cin >> height[i];
    }
    for (int i = 0; i < N; ++i) {
        cin >> base[i];
    }
    for (int i = 0; i < N; ++i) {
        ans += ((double) height[i] + height[i+1])*base[i] / 2.0;
    }
    cout << fixed << setprecision(1) << ans << "\n";
}