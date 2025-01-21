#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    int n; cin >> n;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int a,b; cin >> a >> b;
        if (5*a-3*b>40)ans++;
    }
    cout << ans;
    if (ans == n) cout << "+\n";
}