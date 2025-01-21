#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main() {
    fast();
    ll a1,a2,a3,b1,b2,b3,c1,c2,c3;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> c1 >> c2 >> c3;
    ll ans = 0;
    if (a1 == b2 and c2 > 0) ans += c2;
    if (a2 == b3 and c3 > 0) ans += c3;
    if (a3 == b1 and c1 > 0) ans += c1;
    cout << ans << "\n";
}