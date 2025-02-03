#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,omit-frame-pointer,prefetch-loop-arrays")
#pragma GCC target("avx,avx2,fma")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, k;
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    sort(v.begin(),v.end(),[&](int x, int y) {
        if (x%k == y%k) return x < y;
        else return x%k < y%k;
    });
    for (int i = 0; i < n; ++i) cout << v[i] << " \n"[i == n-1];
}