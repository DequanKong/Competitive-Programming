#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,d,k,x,p;
const int MM = 1e6;
ll v[MM+5];
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n>>d>>k>>x;
    for (int i = 0; i < n; ++i) cin >> v[i];
    cin>>p;
    for (int i = 0; i < n; ++i) {
        while (v[i] >= p and k>=0) {
            v[i] = (v[i]*(100-x))/100; k--;
        }
    }
    cout << (k >= 0 ? "YES" : "NO") << "\n";
}