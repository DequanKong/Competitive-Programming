#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,omit-frame-pointer,prefetch-loop-arrays")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx")
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    int n,s; cin >> n >> s;
    vector<ll> dc(n); vector<pair<ll,int>> op(s);
    for (int i = 0; i < n; ++i) cin >> dc[i];
    for (int i = 0; i < s; ++i) cin >> op[i].first >> op[i].second;

    for (int i = 0; i <= s; ++i) {
        if (i == 0) sort(dc.begin(),dc.end(),greater<ll>());
        else {
            ll nL = op[i-1].second, nR = n-op[i-1].second;
            vector<ll> L(nL), R(nR);
            for (ll i = 0; i < nL; ++i) L[i] = dc[i];
            for (ll i = nL; i < n; ++i) R[i-nL] = dc[i];
            
            int i = 0, j = 0, k = 0;
            while (i < nL and j < nR) {
                if (L[i] >= R[j]) dc[k++] = L[i++]; 
                else dc[k++] = R[j++];
            }
            while (i < nL) dc[k++] = L[i++];
            while (j < nR) dc[k++] = R[j++];
        }
        if (i !=s) {
            for (int j = 0; j < op[i].second; ++j) dc[j] -= op[i].first;
        }
    }
    for (int x = 0; x < n; ++x) {
        if (x == n-1) cout << dc[x] << "\n";
        else cout << dc[x] << " ";
    }
}