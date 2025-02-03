#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MM = 1e6+5;
int v[MM], psa[MM], n, ans;
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n; ans = n;
    for (int i = 1; i <= n; ++i) {
        cin >> v[i]; psa[i] = v[i];
        psa[i] = max(psa[i],psa[i-1]);
        if (psa[i] == v[i] and i == v[i]) ans--;
    }
    cout << ans << "\n";
}