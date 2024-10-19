#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";

int main() {
    boost();
    int n; cin >> n;
    int ans = 0;
    for (int i = 0; i <= n/4; ++i) {
        if ((n - 4*i) % 5 == 0) ans++;
    }
    cout << ans << endl;
}