#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    boost();
    ll M, N, K; cin >> M >> N >> K;
    bool row[M+1], col[N+1];
    memset(row,false,sizeof(row));
    memset(col,false,sizeof(col));
    ll ans = 0;
    set<ll> rowS, colS;
    while (K--) {
        char c; ll x; cin >> c >> x;
        if (c == 'R') {
            if (row[x] == false) {
                // black -> gold
                row[x] = true;
                ans += N;
                ans -= colS.size()*2;
                rowS.insert(x);
            } else {
                row[x] = false;
                // gold -> black
                ans -= N; ans += colS.size()*2;
                rowS.erase(x);
            }
        } else {
            if (col[x] == false) {
                // black -> gold
                col[x] = true;
                ans += M;
                ans -= rowS.size()*2;
                colS.insert(x);
            } else {
                col[x] = false;
                // gold -> black
                ans -= M; ans += rowS.size()*2;
                colS.erase(x);
            }
        }
    }
    cout << ans << "\n";
}