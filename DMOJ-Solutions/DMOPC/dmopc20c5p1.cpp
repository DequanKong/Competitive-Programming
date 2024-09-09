#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define boost() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n';

int main() {
    boost();
    string S, T; cin >> S >> T;
    ll mn = min(S.size(),T.size()); ll ans = 0;
    for (ll i = 0; i < mn; ++i) {
        if (S[i] == T[i]) ans++;
        else break;
    }
    ans += S.size() + T.size() - 3*ans;
    cout << ans << endl;
}