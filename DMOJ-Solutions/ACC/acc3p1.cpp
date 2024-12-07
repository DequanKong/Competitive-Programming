#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int MM = 1e6+5;
ll cnt[MM], v[MM];

int main() {
    fast();
    
    ll n, k, x = 0, ans = 0; cin >> n >> k;

    for (int i = 1; i <= n; ++i) cin >> v[i];
    ll left = 1, right = 1;
    memset(cnt,0,sizeof(cnt));
    while (right <= n) {
        cnt[v[right]]++;
        if (cnt[v[right]] == 1) x++;
        while (x >= k) {
            ans += n-right+1;
            cnt[v[left]]--;
            if (cnt[v[left]] == 0) x--;
            left++;
        }
        right++;
    }
    cout << ans << "\n";
    
}