#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9+7;
ll a,b,c,d,e,n;

ll solve(ll x) {
    if (x==0) return e;
    return (((a%MOD)*(solve(x/b)%MOD))%MOD + ((c%MOD)*(solve(x/d)%MOD))%MOD)%MOD;
}

int main() {
    fast();
    cin >> a >> b >> c >> d >> e >> n;
    cout << solve(n) << "\n";
}