#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fast() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main() {
    fast();
    int n; cin >> n; vector<int> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    sort(v.begin(),v.end());
    if (n % 2 == 1) cout << v[n/2] << "\n";
    else {
        double ans = (v[n/2] + v[n/2-1] ) / 2.0;
        cout << (int) round(ans) << "\n";
    }
}