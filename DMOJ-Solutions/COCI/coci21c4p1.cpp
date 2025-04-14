#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n; vector<ll> v;
int main() {
    cin>>n; ll ans = 0;
    if (n == 1) {cout << "0\n"; return 0;}
    for (int i = 0; i < n; ++i) {
        ll a; cin >> a; v.push_back(a); ans+=a;
    }

    sort(v.begin(),v.end());
    ans += (v[0]*(n-2));
    cout << ans << "\n";
    
}