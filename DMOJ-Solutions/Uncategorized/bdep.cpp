#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll p,y,t,n;

bool solve(ll mid) {
    ll c = 0;
    for (int i = 0; i < y; ++i) {
        c += mid;
        c *= p;
        c /= 100;
        if (c >= t) return true;
    }
    return false;
}

int main() {
    fast();
    
    cin >> p >> y >> t;
    p += 100;
    
    ll l = 0, r = t;
    while (l + 1 < r) {
        ll mid = (l + r) / 2;
        if (solve(mid)) r = mid;
        else l = mid;
    }
    
    cout << r << "\n";
}