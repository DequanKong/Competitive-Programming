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
    int n,q; cin >> n >> q;
    unordered_map<int, vector<int>> mp1;
    unordered_map<int,set<int>> mp2;
    while (q--) {
        int query; cin >> query;
        if (query == 1) {
            int i,j; cin >> i >> j;
            mp1[j].push_back(i);
            mp2[i].insert(j);
        } else if (query == 2) {
            int i; cin >> i;
            sort(mp1[i].begin(),mp1[i].end());
            for (int k: mp1[i]) {
                cout << k << " ";
            }
            cout << "\n";
            
        } else {
            int i; cin >> i;
            for (int k: mp2[i]) cout << k << " ";
            cout << "\n";
        }
    }
}