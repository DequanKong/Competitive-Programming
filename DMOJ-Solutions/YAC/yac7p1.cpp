#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,omit-frame-pointer,prefetch-loop-arrays")
#pragma GCC target("avx,avx2,fma")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ans = 0, x; int n;
queue<ll> odd,even,posOdd,posEven; vector<ll> all;
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n; 
    for (int i = 1; i <= n; ++i) {
        cin >> x;
        if (x%2 == 1) { odd.push(x); posOdd.push(i); }
        else { even.push(x); posEven.push(i);}
    }
    if (!odd.empty() and !even.empty()) {
        ans += odd.front()/2;
        all.push_back(posOdd.front());
        odd.pop(); posOdd.pop();
        while (!even.empty()) {
            ans += even.front()/2-1;
            all.push_back(posEven.front());
            even.pop(); posEven.pop();
        }
        while (!odd.empty()) {
            ans += odd.front()/2;
            all.push_back(posOdd.front());
            odd.pop(); posOdd.pop();
        }
        cout << ans << "\n";
        for (int i = 0; i < n; ++i) {
            if (i == n-1) cout << all[i] << "\n";
            else cout << all[i] << " ";
        }
    } else if (odd.empty()) {
        while (!even.empty()) {
            ans += (even.front())/2;
            even.pop();
        }
        cout << ans << "\n";
        for (int i = 1; i <= n; ++i) {
            if (i == n) cout << i << "\n";
            else cout << i << " ";
        }
    } else if (even.empty()) {
        while (!odd.empty()) {
            ans += (odd.front()-1)/2;
            odd.pop();
        }
        cout << ans << "\n";
        for (int i = 1; i <= n; ++i) {
            if (i == n) cout << i << "\n";
            else cout << i << " ";
        }
    }
}