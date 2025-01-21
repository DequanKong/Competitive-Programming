#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,omit-frame-pointer,prefetch-loop-arrays")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx")
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int n; ll k;
vector<ll> pos,neg;

int main() {
    fast();
    cin >> n >> k;
    
    while (n--) {
        int x; cin >> x;
        if (x>0) pos.push_back(x);
        if (x<0) neg.push_back(-x);
    }
    
    sort(pos.begin(),pos.end(),greater<ll>());
    sort(neg.begin(),neg.end(),greater<ll>());
    
    vector<ll> psapos(pos.size()+1), psaneg(neg.size()+1);
    for (int i = 0; i <= pos.size(); ++i) {
        if (i==0) continue;
        psapos[i] = psapos[i-1] + pos[i-1];
    }
    for (int i = 0; i <= neg.size(); ++i) {
        if (i == 0) continue;
        psaneg[i] = psaneg[i-1] + neg[i-1];
    }

    ll ans = 0;
    for (int posMove = 0; posMove <= min(k,(ll)pos.size()); ++posMove) {
        ll temp = 0;

        temp += psapos[posMove]; temp += psaneg[min((ll)neg.size(),(k-posMove)/2)];

        ans = max(ans,temp);
    }
    cout << ans << "\n";
}