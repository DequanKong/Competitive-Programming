#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MM = 1e5+5;
int players[MM];

int main() {
    fast();
    int n,t,m; cin >> n >> t >> m;
    for (int i = 1; i <= m; ++i) {
        int x; cin >> x; players[x] ++;
    }
    int ans = 0;
    for (int i=1; i <= n; ++i){
        if (m-players[i]<t) ans++;
    }
    cout << ans << '\n';
}