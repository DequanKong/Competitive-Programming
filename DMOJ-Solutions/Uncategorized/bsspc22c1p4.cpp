#include <bits/stdc++.h>

using namespace std;

int n, t, arr[200005], temp = -1, ans = 0, mx = 0, tt = 0, idx = -1;
int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
    cin >> n >> t;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (tt <= t) {
            mx = max(mx, arr[i]);
            temp++;
            idx = i;
            tt += arr[i];
        }
    }
    ans = temp;
    if (idx != -1) {
        // cout << tt << "\n";
        tt -= mx;
        for (int i = idx + 1; i < n; i++) {
            tt += arr[i];
            if (tt <= t) ans++;
        }
    }
    cout << max(temp, ans) << "\n";
}