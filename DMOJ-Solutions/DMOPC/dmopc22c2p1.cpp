#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin>>n;
    int ans = n/4*2;
    if (n%4==3)ans++;
    cout << ans << "\n";
    for (int i = 1; i <= n; ++i) {
        if (i % 4 == 1 or i % 4 == 2) cout << "_";
        else cout << "M";
    }
    cout << "\n";
}