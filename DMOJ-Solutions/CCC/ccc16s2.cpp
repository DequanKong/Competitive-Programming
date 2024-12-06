#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast();
    
    int type, n; cin >> type >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];
    sort(a.begin(),a.end(),greater<int>());
    sort(b.begin(),b.end(),greater<int>());
    int ans = 0;
    if (type == 1) {
        
        for (int i = 0; i < n; ++i) {
            ans += max(a[i],b[i]);
        }
    } else {
        for (int i = 0; i < n; ++i) {
            ans += max(a[i],b[n-1-i]);
        }
    }
    cout << ans << "\n";
}